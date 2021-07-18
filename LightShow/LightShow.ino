// requires 12 individual LED's, and resistors

using namespace std;
String creator = "Zuri Barnes";
String creatorURL = "www.zuribarnes.com";
int version = 1.0;
void lightsOnebyOne();
void levels();

void setup() {   //  ====== Begin Setup ======
  Serial.begin(9600);
  for(int i = 1; i <= 12; i++) {
      pinMode(i, OUTPUT);
    }
    Serial.println("=========================================");
    Serial.println("Light Show by: " + creator);
    Serial.println("view code at: " + creatorURL);
    Serial.println("=========================================");
  }

void loop() { //  ====== Begin Main/Loop ======
lightsOnebyOne();
    delay(40);
  levels();
  }

void levels() { // led's have volume motion effect
  int myDelayTime = 70;
  for(int i = 1; i <= 12; i++) {
    digitalWrite(i, HIGH);
    delay(myDelayTime);
     }
  for(int i = 12; i >= 1; i--) {
    digitalWrite(i, HIGH);
    delay(myDelayTime);
    digitalWrite(i, LOW);
    delay(myDelayTime);
    } 
 }
 
void lightsOnebyOne() {  // LED's light up one by one, from lowest pin to highest, and then back
  int myDelayTime = 35;
  for(int i = 1; i <= 12; i++) {
    digitalWrite(i, HIGH);
    delay(myDelayTime);
    digitalWrite(i, LOW);
    delay(myDelayTime);
     }
  for(int i = 12; i >= 1; i--) {
    digitalWrite(i, HIGH);
    delay(myDelayTime);
    digitalWrite(i, LOW);
    delay(myDelayTime);
    } 
 }
