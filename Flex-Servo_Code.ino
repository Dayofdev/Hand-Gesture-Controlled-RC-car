#include <Servo.h>

Servo myservo;

int flexpin = A1; 
int val;

void setup() {
 myservo.attach(8); 
}

void loop() {
 val = analogRead(flexpin); 
 val = map(val, 370, 530, 0, 180); 
 myservo.write(val); 
 delay(10); 
}
