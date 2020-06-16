
#include <Servo.h> //first include this library

Servo myservo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val; // variable to read the value from the analog pin
int angle;

void setup() {
  myservo.attach(9); 
    Serial.begin(9600);
}

void loop() {
  val = analogRead(potpin);   
   Serial.print("potVal: ");
  Serial.print(val);// reads the value of the potentiometer (value between 0 and 1023)
 
  angle = map(val, 0, 1023, 0, 179);
  Serial.print("angle: ");
  Serial.println(angle);

  myservo.write(angle);
  delay(1000);                          
}
