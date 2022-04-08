// ---------------------------------------------------------------- //
// Arduino Ultrasoninc Sensor HC-SR04
// Re-writed by 
// Using Arduino IDE 1.8.7
// Using HC-SR04 Module
// Tested on 17 September 2019
// ---------------------------------------------------------------- //

#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 3 //attach pin D3 Arduino to pin Trig of HC-SR04

// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
  Serial.println("with Arduino UNO R3");
}
void loop() {
//  // Clears the trigPin condition
//  digitalWrite(trigPin, LOW);
//  delay(20);
//  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
//  digitalWrite(trigPin, HIGH);
//  delay(20);
//  digitalWrite(trigPin, LOW);
//
//  // Clears the trigPin condition
//  digitalWrite(trigPin, LOW);
//  delay(60);
//  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
//  digitalWrite(trigPin, HIGH);
//  delay(60);
//  digitalWrite(trigPin, LOW);
//
//  // Clears the trigPin condition
//  digitalWrite(trigPin, LOW);
//  delay(180);
//  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
//  digitalWrite(trigPin, HIGH);
//  delay(180);
//  digitalWrite(trigPin, LOW);
  int t=20000;
  //Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(t);
  digitalWrite(trigPin, HIGH);// 1 Start Bit
  delayMicroseconds(t);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(t);

  digitalWrite(trigPin, LOW);
  delayMicroseconds(t);
  digitalWrite(trigPin, HIGH);// 1 Start Bit
  delayMicroseconds(t);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(t);

  digitalWrite(trigPin, LOW);
  delayMicroseconds(t);
  digitalWrite(trigPin, LOW);// 0
  delayMicroseconds(t);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(t);

  digitalWrite(trigPin, LOW);
  delayMicroseconds(t);
  digitalWrite(trigPin, LOW);// 0
  delayMicroseconds(t);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(t);

  digitalWrite(trigPin, LOW);
  delayMicroseconds(t);
  digitalWrite(trigPin, HIGH);// 1
  delayMicroseconds(t);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(t);

  digitalWrite(trigPin, LOW);
  delayMicroseconds(t);
  digitalWrite(trigPin, HIGH);// 1
  delayMicroseconds(t);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(t);

  digitalWrite(trigPin, LOW);
  delayMicroseconds(t);
  digitalWrite(trigPin, LOW);// 0 Stop bit
  delayMicroseconds(t);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(t);
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(t);
  digitalWrite(trigPin, LOW);// 0 Stop bit
  delayMicroseconds(t);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(t);

}
