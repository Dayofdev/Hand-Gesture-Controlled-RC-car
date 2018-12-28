int analogInPin = A0;

int sensorValue = 0;

int outputValue = 0;

int transistorPin = 3;

void setup()

{

Serial.begin(9600);

pinMode(8, OUTPUT);

pinMode(9, OUTPUT);

pinMode(transistorPin, OUTPUT);

}

void loop()

{

sensorValue = analogRead(analogInPin)/4;

outputValue = map(sensorValue, 370, 530, 0, 180);

analogWrite(transistorPin, sensorValue);

if (sensorValue >= 160)

{

digitalWrite(8, HIGH);

digitalWrite(9, LOW);

}

else

{ digitalWrite(9, HIGH);

digitalWrite(8, LOW);

}

delay(10); }
