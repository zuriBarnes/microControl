#include <Servo.h>

// Servo values
Servo myServo;
int servoDelay = 1000;
int servoMax = 180;
int servoMin = 0;


void setup() {
  myServo.attach(8);
}

void loop() {
  servoAlert();
}

void servoAlert() {
  myServo.write(servoMax);
    delay(servoDelay);
  myServo.write(servoMin);
    delay(servoDelay);
}
