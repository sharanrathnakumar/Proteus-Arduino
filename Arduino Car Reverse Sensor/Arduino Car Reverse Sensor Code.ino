
const int trigPin = 2; 
const int echoPin = 3; 

long duration;
int distance;


void setup() {
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
Serial.begin(9600); 
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,LOW);
}

void loop() {

  if(distance < 30)
{
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
}

digitalWrite(trigPin, LOW);
delayMicroseconds(2);


digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);


duration=pulseIn(echoPin, HIGH);
distance=(duration*0.034)/2;
delay(10);

}
