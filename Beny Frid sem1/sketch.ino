#include <LiquidCrystal_I2C.h>

#define I2C_ADDR    0x27
#define LCD_COLUMNS 20
#define LCD_LINES   4

LiquidCrystal_I2C lcd(I2C_ADDR, LCD_COLUMNS, LCD_LINES);

int num = 100;

void setup() {

  lcd.init();
  lcd.backlight();

  lcd.print("Hello World");

}

void loop() {

  delay(1000);
  lcd.clear();  
  lcd.print(readTemp());
}

float readTemp() {
  const float BETA = 3950; 
  int analogValue = analogRead(A3);
  float celsius = 1 / (log(1 / (1023. / analogValue - 1)) / BETA + 1.0 / 298.15) - 273.15;
  return celsius;
}