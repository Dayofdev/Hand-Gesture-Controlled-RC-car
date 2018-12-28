int analogInPin = A0;
int sensorValue = 0;
int outputValue = 0;
int transistorPin = 3;
int enA = 10;
int in1 = 9;
int in2 = 8;
// motor two
int enB = 5;
int in3 = 7;
int in4 = 6;
void setup()
{
Serial.begin(9600);
 pinMode(enA, OUTPUT);
 pinMode(enB, OUTPUT);
 pinMode(in1, OUTPUT);
 pinMode(in2, OUTPUT);
 pinMode(in3, OUTPUT);
 pinMode(in4, OUTPUT);
}
void loop()
{

sensorValue = analogRead(analogInPin)/4;
outputValue = map(sensorValue, 0, 1023, 0, 255);
analogWrite(transistorPin, sensorValue);

if (sensorValue >= 160)
{

digitalWrite(in1, HIGH);

digitalWrite(in2, LOW);

analogWrite(enB, 200);

digitalWrite(in3, HIGH);

digitalWrite(in4, LOW);

analogWrite(enB, 200);
}

else
digitalWrite(in1, LOW);
 
digitalWrite(in2, LOW);
 
digitalWrite(in3, LOW);
 
digitalWrite(in4, LOW);
}


