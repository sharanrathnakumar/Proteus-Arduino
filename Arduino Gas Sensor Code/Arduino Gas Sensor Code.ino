//GAS SENSOR ARDUINO PROTEUS DESING

void setup() {

  pinMode(7,INPUT);
  pinMode(3,OUTPUT);  

}

void loop() {

  if(digitalRead(7) == 1)

  {

   digitalWrite(3,HIGH);

  }

  else
  {

     digitalWrite(3,LOW);

  }
  
}
