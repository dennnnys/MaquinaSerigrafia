int Subir;
void setup() {
  pinMode(14, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(25, OUTPUT);

  pinMode(13, INPUT);
  pinMode(4, OUTPUT);

}

void loop() {

  if (digitalRead(13) == LOW)
  {
    digitalWrite(14, HIGH);
    delay(1000);
    digitalWrite(14, LOW);
    delay(1000);
    digitalWrite(26, HIGH);
    delay(1000);
    digitalWrite(26, LOW);
    delay(1000);
    digitalWrite(25, HIGH);
    delay(1000);
    digitalWrite(25, LOW);
    delay(1000);
    digitalWrite(27, HIGH);
    delay(1000);
    digitalWrite(27, LOW);
    delay(1000);

    digitalWrite(4, HIGH);
    delay(1000);


    digitalWrite(4, LOW);
    delay(1000);

    digitalWrite(4,HIGH);
  }


}
