void setup() {
  
pinMode(6,INPUT);
pinMode(4,OUTPUT);  

}

void loop() {
  if(digitalRead(6) == 1)
  {
   digitalWrite(4,HIGH);
  }
  else
  {
     digitalWrite(4,LOW);
  }
  
}
