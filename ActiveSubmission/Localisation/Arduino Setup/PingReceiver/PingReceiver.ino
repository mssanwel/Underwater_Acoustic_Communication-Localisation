// ---------------------------------------------------------------- //
// Arduino Ultrasoninc Sensor HC-SR04
// Re-writed by Arbi Abdul Jabbaar
// Using Arduino IDE 1.8.7
// Using HC-SR04 Module
// Tested on 17 September 2019
// ---------------------------------------------------------------- //

#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 6 //attach pin D3 Arduino to pin Trig of HC-SR04

// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
//  pinMode(A1, INPUT_PULLDOWN);
  Serial.begin(115200); // // Serial Communication is starting with 9600 of baudrate speed
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
  Serial.println("with Arduino UNO R3");
  //pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(echoPin), read, RISING);
}
void loop() {

  if (Serial.available() > 0) {
    int incomingByte = Serial.read();
    Serial.print("I received ");
    Serial.println(incomingByte, BIN);
  }

  
  // Clears the trigPin condition
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(2);
  digitalWrite(trigPin, LOW);

//  // Reads the echoPin, returns the sound wave travel time in microseconds
//  duration = pulseIn(echoPin, HIGH, 100000);
//  // Calculating the distance
//  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
//  // Displays the distance on the Serial Monitor
////  Serial.print("Distance: ");
//  Serial.println(duration);
//  Serial.println(" cm");

int sigInVal = analogRead(A1);
delay(1);
Serial.print(millis());
Serial.print(",");
Serial.println(sigInVal);
//if (sigInVal<100){
//  Serial.println(1);
//}
//else{
//  Serial.println(0);
//}
}

void read(){
     
}
