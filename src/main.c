#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "rom/ets_sys.h"
#include "nvs_flash.h"
#include "driver/gpio.h"
#include "sdkconfig.h"
#include "dht11.h"

void DHT_task(void *pvParameter)
{
   setDHTPin(4);
   printf("Starting DHT measurement!\n");
   while(1)
   {
    printf("Temperature reading %d\n",getTemp());
    printf("F temperature is %d\n", getFtemp());
    printf("Humidity reading %d\n",getHumidity());
    vTaskDelay(3000 / portTICK_RATE_MS);
   }
}

void app_main(void) {

    nvs_flash_init();
    system_init();
    vTaskDelay(1000 / portTICK_RATE_MS);
    xTaskCreate(&DHT_task, "DHT_task", 2048, NULL, 5, NULL);
    
//~/.mos/bin/mos build --local --repo /Users/lemonhall/Downloads/mongoose-os --verbose
}
