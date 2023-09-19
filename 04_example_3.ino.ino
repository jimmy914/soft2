#define PIN_LED 13
unsigned int count = 0;
bool toggle = false;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); 
  while (!Serial) {
    ; 
  }
  Serial.println("Hello World!");
  digitalWrite(PIN_LED, LOW);
}

void loop() {
  Serial.println(++count);
  toggle = !toggle; 
  digitalWrite(PIN_LED, toggle); 
  delay(1000); 
}
