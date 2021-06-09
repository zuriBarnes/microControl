#include <Servo.h>

// Servo values
Servo myServo; // new Servo object
int servoDelay = 1000;
int servoMax = 180;
int servoMin = 0;


void setup() {
  myServo.attach(8); // attach to pin
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
