#include <Servo.h>

Servo Rotation;
Servo Claw;

int flexpin = A1; 
int flexpin0 = A0;
int val;
int val2;
int enA = 10;
int in1 = 9;
int in2 = 8;
// motor two
int enB = 5;
int in3 = 7;
int in4 = 6;
void setup()
{
 // set all the motor control pins to outputs
 Rotation.attach(3);
 Claw.attach(11);
 pinMode(enA, OUTPUT);
 pinMode(enB, OUTPUT);
 pinMode(in1, OUTPUT);
 pinMode(in2, OUTPUT);
 pinMode(in3, OUTPUT);
 pinMode(in4, OUTPUT);
}

void demoOne()
{
// this function will run the motors in both directions at a fixed speed in a value preset between 0 and 255
 // turn on motor A, the right moto
 digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
 // set speed to 200 out the possible given range
 analogWrite(enA, 200);
 // turn on motor B
 digitalWrite(in3, HIGH);
 digitalWrite(in4, LOW);
 // set speed to 200 out of possible range 0~255
 analogWrite(enB, 200);
 delay(2000);
 digitalWrite(in1, LOW);
 digitalWrite(in2, HIGH);
 digitalWrite(in3, LOW);
 digitalWrite(in4, HIGH);
 delay(2000);
 // now turn of
}

void loop()
{ 
  
 demoOne();
 val = analogRead(flexpin); 
 val2 = analogRead(flexpin0);
 val = map(val, 370, 530, 0, 180); 
 val2 = map(val2, 370, 530, 0, 180);
 Rotation.write(val); 
 Claw.write(val2);
 delay(10); 
}
