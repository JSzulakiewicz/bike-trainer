
extern unsigned long delays[50];
extern unsigned int revCounter;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT_PULLUP);
  SetupLcd();
  revCounter = 0;
  for (int i=0;i<50;i++) delays[i]=0;
}
