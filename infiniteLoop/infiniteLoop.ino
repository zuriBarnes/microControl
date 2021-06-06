void setup() {
  Serial.begin(9600);
  for(int i; i <= 12; i++) {
      pinMode(i, OUTPUT);
    }

}

void loop() {
  for(int i; i <= 12; i++) {
    digitalWrite(i, HIGH);
    delay(1000);
    digitalWrite(i, LOW);
    delay(1000);
    
    }

  
}
