// UltraSensor values
const int trigPin = 5;
const int echoPin = 6;
long duration;
int distance;

// LED values
const int redLED = 11;
const int blueLED = 10;
const int greenLED = 10;


void setup() { // =========== SETUP ========= //
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

}

void loop() { // =========== LOOP ========= //
  analogWrite(redLED, 0);
  analogWrite(blueLED, 0);
  analogWrite(greenLED, 33);

  motionSensor();
    Serial.println(distance);
}

void motionSensor() {
  digitalWrite(trigPin, LOW); // why this is needed?  
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin , HIGH);
  distance = duration * 0.034 / 2; //  Why is this neccessary?
}
