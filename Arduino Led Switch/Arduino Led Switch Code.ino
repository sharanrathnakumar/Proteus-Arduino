int flag = 0;
void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);

}

void loop()
{
  if (digitalRead(2) == 1 && flag == 0)

  {
    digitalWrite(13, HIGH);

    while (digitalRead(2) == 1);
    flag = 1;
  }


  delay(100);

  if (digitalRead(2) == 1 && flag == 1)
  {
    digitalWrite(13, LOW);
    while (digitalRead(2) == 1);
    flag = 0;
  }


}
