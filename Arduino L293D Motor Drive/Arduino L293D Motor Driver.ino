char ch;
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  if(Serial.available()>0)
  
  ch = Serial.read();
  if (ch == 'f')

    //FORWARD....
  {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
  }

  if (ch == 'b')
    //BACKWARD....
  {
    digitalWrite(13, LOW );
    digitalWrite(12, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
  }

  //RIGHT...
  if (ch == 'r')
  {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  }

  //LEFT...
  if(ch == 'l')
  {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);

  } //STOP...

  if (ch == 's')
  {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);

  }


}
