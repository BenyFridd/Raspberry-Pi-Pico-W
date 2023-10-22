from machine import I2C, Pin
from time import sleep
from pico_i2c_lcd import I2cLcd

i2c = I2C(0, sda=Pin(0), scl=Pin(1), freq=400000)
I2C_ADDR = i2c.scan()[0]
lcd = I2cLcd(i2c, I2C_ADDR, 2, 16)

button = Pin(2, Pin.IN, Pin.PULL_UP)

last_button_state = 1
message = "Hello world!"

while True:
    button_state = button.value()

    if button_state == 0 and last_button_state == 1:
        message = "Beny Frid" if message == "Hello world!" else "Hello world!"
        lcd.putstr(message)
        sleep(5)
        lcd.clear()
        sleep(1)
    last_button_state = button_state
