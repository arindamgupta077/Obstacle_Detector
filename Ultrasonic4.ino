const int trigPin1 = 2;
const int echoPin1 = 3;
const int trigPin2 = 4;
const int echoPin2 = 5;
const int trigPin3 = 6;
const int echoPin3 = 7;
const int trigPin4 = 8;
const int echoPin4 = 9;
const int buzzer=13;
const int analogInPin = A0;


long duration1,duration2,duration3,duration4;
int distance1,distance2,distance3,distance4;


void setup() {
pinMode(trigPin1, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin1, INPUT); // Sets the echoPin as an Input
pinMode(trigPin2, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin2, INPUT); // Sets the echoPin as an Input
pinMode(trigPin3, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin3, INPUT); // Sets the echoPin as an Input
pinMode(trigPin4, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin4, INPUT); // Sets the echoPin as an Input
pinMode(buzzer, OUTPUT);
 Serial.begin (9600);
}


void loop() {
  int sensorValue,outputValue, i=0;
sensorValue = analogRead(analogInPin);
 outputValue = map(sensorValue, 0, 1023, 0, 255);
  Serial.print("\t output = ");
  Serial.println(outputValue);
  
digitalWrite(trigPin1, LOW);
delayMicroseconds(2);

digitalWrite(trigPin1, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin1, LOW);
  
duration1 = pulseIn(echoPin1, HIGH);
distance1= duration1*0.034/2;
  
  Serial.print ( "Sensor1  ");
  Serial.print (distance1);
  Serial.println("cm");

  if(distance1<outputValue) {
  do{
   i++;
  tone(buzzer,800);
  delay(200);
  noTone(buzzer);
  delay(200);
  }
 while(i<=1);
  delay(2000);
  }
  
 
digitalWrite(trigPin2, LOW);
delayMicroseconds(2);
digitalWrite(trigPin2, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin2, LOW);
  
duration2 = pulseIn(echoPin2, HIGH);
distance2= duration2*0.034/2;
  
  Serial.print ( "Sensor2  ");
  Serial.print (distance2);
  Serial.println("cm");
  
  i=0;
    if(distance2<outputValue) {
   do{
   i++;
  tone(buzzer,800);
  delay(200);
  noTone(buzzer);
  delay(200);
  }
   while(i<=2);
  delay(2000);
  }

digitalWrite(trigPin3, LOW);
delayMicroseconds(2);

digitalWrite(trigPin3, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin3, LOW);
    duration3 = pulseIn(echoPin3, HIGH);

distance3= duration3*0.034/2;
    Serial.print ( "Sensor3  ");
  Serial.print (distance3);
  Serial.println("cm");
   i=0;
    if(distance3<outputValue) {
    do{
   i++;
  tone(buzzer,800);
  delay(200);
  noTone(buzzer);
  delay(200);
  }
   while(i<=3);
  delay(2000);
  }

digitalWrite(trigPin4, LOW);
delayMicroseconds(2);

digitalWrite(trigPin4, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin4, LOW);

  

duration4 = pulseIn(echoPin4, HIGH);

distance4= duration4*0.034/2;
    Serial.print ( "Sensor4  ");
  Serial.print (distance4);
  Serial.println("cm");
  i=0;
    
if(distance4<outputValue) {
    do {
   i++;
  tone(buzzer,800);
  delay(200);
  noTone(buzzer);
  delay(200);
  }
   while(i<=4);
  delay(2000);
  }

  }

  
