#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  
void SetupLcd()
{
  lcd.begin(16,2);    // Initializing of LCD 2x16
  lcd.backlight();   
  lcd.setCursor(0,0); 
  lcd.print("Hello, world!");
  delay(500);
  lcd.setCursor(0,1); 
  lcd.print("BOTLAND.com.pl");
}
