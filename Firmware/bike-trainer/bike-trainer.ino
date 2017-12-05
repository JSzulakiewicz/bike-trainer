
//Pins define:
const int sensorPin = 2;
const int ledPin =  LED_BUILTIN;



//BlinkingLed:
char ledState = LOW;
void LedChange()
{
  if (ledState == LOW) ledState=HIGH;
    else ledState=LOW;

    digitalWrite(ledPin, ledState);   
}


//LCD over IIS setup:
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  
void SetupLcd()
{
  lcd.begin(16,2);   // Inicjalizacja LCD 2x16
  lcd.backlight(); // zalaczenie podwietlenia 
  lcd.setCursor(0,0); // Ustawienie kursora w pozycji 0,0 (pierwszy wiersz, pierwsza kolumna)
  lcd.print("Hello, world!");
  delay(500);
  lcd.setCursor(0,1); //Ustawienie kursora w pozycji 0,0 (drugi wiersz, pierwsza kolumna)
  lcd.print("BOTLAND.com.pl");
}


// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT_PULLUP);
  SetupLcd();
}


void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(sensorPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == LOW) {
    LedChange();

    delay(200);
  }
}
