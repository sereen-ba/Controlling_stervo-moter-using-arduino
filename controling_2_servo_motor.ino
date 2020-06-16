#include <Servo.h>


double angle1;
double angle2;
Servo servo_3;
Servo servo_5;

void setup(){
    pinMode(A0+0,INPUT);
    servo_3.attach(3); // init pin
    pinMode(A0+1,INPUT);
    servo_5.attach(5); // init pin
}

void loop(){
    angle1 = analogRead(A0+0);
    angle1 = ((angle1) * (180)) / (1020);
    angle1 = (180) - (angle1);
    servo_3.write(angle1); // write to servo
    angle2 = analogRead(A0+1);
    angle2 = ((angle2) * (180)) / (1020);
    angle2 = (180) - (angle2);
    servo_5.write(angle2); // write to servo
}
