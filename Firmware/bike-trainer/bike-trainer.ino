#include <Wire.h>
#include <LiquidCrystal_I2C.h>

extern int buttonState;

//Pins define:
const int sensorPin = 2;
const int ledPin =  LED_BUILTIN;

const int NumberOfSamples = 50;

extern LiquidCrystal_I2C lcd;


//BlinkingLed:
char ledState = LOW;
void LedChange()
{
  if (ledState == LOW) ledState=HIGH;
    else ledState=LOW;

    digitalWrite(ledPin, ledState);   
}




unsigned long delays[NumberOfSamples];

void shiftDelays()
{
  for(int i=NumberOfSamples-2; i>0; i--)
    delays[i+1]=delays[i];  
}

unsigned long sum (unsigned long * arrayOfSamples)
{
  unsigned long value =0;
  for (int i=0;i<NumberOfSamples;i++) value += arrayOfSamples[i];
  return value;
}

unsigned long average(unsigned long * arrayOfSamples)
{
  return sum(arrayOfSamples) / NumberOfSamples;
}

unsigned int revCounter = 0;

void loop() {
  
  if (digitalRead(sensorPin) == LOW) {
    revCounter++;
    LedChange();
    shiftDelays();
    delays[0] = millis() - delays[1];
    
    lcd.setCursor(0,0); 
    lcd.print(delays[0]);
    lcd.print("   AVG: ");
    lcd.print(average(delays));

    
    lcd.setCursor(0,1); 
    lcd.print("   REVs: ");
    lcd.print(revCounter);
    
        

    delay(50); //prevents contact sparks
  }
}
