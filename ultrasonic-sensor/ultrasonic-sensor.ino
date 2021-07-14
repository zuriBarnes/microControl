#include <Servo.h>

// ========= Declarations ============ //
// Servo values
Servo myServo;
int servoDelay = 100;
int servoMax = 180;
int servoMin = 0;


// UltraSensor values
const int trigPin = 5;
const int echoPin = 6;
long duration;
int distance;

// Buzzer
const int buzzPin = 3;

// LED values
const int redLED = 11;
const int blueLED = 10;
const int greenLED = 9;

void setup() { // =========== SETUP ========= //
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(buzzPin, OUTPUT);
}

void loop() { // =========== LOOP ========= //
  motionSensor();
  if(distance <= 20) {
    rgb_LED(55,55,0);
    digitalWrite(buzzPin, HIGH);
      delay(100);
       digitalWrite(buzzPin, LOW);
   } else {
      rgb_LED(0,0,0);
    }
    Serial.println(distance);
}

//======= Functions ============ //
void motionSensor() {
  digitalWrite(trigPin, LOW); // why this is needed?  
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin , HIGH);
  distance = duration * 0.034 / 2; //  Why is this neccessary?
}

int rgb_LED( int red_value , int green_value, int blue_value) {
  analogWrite(redLED, red_value);
  analogWrite(greenLED, green_value);
  analogWrite(blueLED, blue_value);
}
