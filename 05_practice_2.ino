const int ledPin = 7;
const int blinkCount = 5;
const int blinkDelay = 100; 

void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {

  digitalWrite(ledPin,LOW);
  delay(1000);
  
  for (int i = 0; i < blinkCount; i++) {

    digitalWrite(ledPin, HIGH);
    delay(blinkDelay);


    digitalWrite(ledPin, LOW);
    delay(blinkDelay);
  }

  while(1){digitalWrite(ledPin, HIGH);}
}
