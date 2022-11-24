//DISTANCE MEASUREMENT USING ULTRASONIC SENSOR


const int trigPin = 3;  
const int echoPin = 2;  


long duration;
int distance;


void setup() {
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
Serial.begin(9600); 
pinMode(11,OUTPUT);
}

void loop() {

 
{
  digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(11,LOW);
}

digitalWrite(trigPin, LOW);
delayMicroseconds(2);


digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);


duration=pulseIn(echoPin, HIGH);


distance=(duration*0.034)/2;

Serial.print("Distance: ");
Serial.println (distance);
delay(10);

}
