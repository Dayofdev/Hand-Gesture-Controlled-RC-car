#include <Servo.h>

Servo Rotation;
Servo Claw;

int flexpin = A1; 
int flexpin0 = A0;
int val;
int val2;

void setup() {
 Rotation.attach(3);
 Claw.attach(11);
}

void loop() {
 val = analogRead(flexpin); 
 val2 = analogRead(flexpin0);
 val = map(val, 370, 530, 0, 180); 
 val2 = map(val2, 370, 530, 0, 180);
 Rotation.write(val); 
 Claw.write(val2);
 delay(250); 
}
