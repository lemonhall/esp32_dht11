Build with monngose os

or just esp-idf

wired up:
=========

```
DHT11      ESP32
VCC   ---> VIN
DATA  ---> D4
GND   ---> GND
```

DHT11 with input 3~5.5v

origin dev by samrjohnston
https://github.com/samrjohnston/ESP32Projects

but his project is full of mistake;

Output:
=======

SerialPort:with 15200

stdout:

Temperature reading 25
F temperature is -2
Humidity reading 77

Something Useful:
=================
1. https://esp-idf.readthedocs.io/en/latest/get-started/get-started-devkitc.html

2. http://www.espressif.com/sites/default/files/documentation/esp_wroom_32_datasheet_en.pdf

3. https://nodemcu.readthedocs.io/en/master/en/modules/dht/

4. https://exploreembedded.com/wiki/AWS_IOT_with_Arduino_ESP32

5. http://www.micropik.com/PDF/dht11.pdf

