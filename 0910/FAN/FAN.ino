void setup() {
  pinMode(7, OUTPUT); //우회전 - 앞으로
  pinMode(8, OUTPUT); //좌회전 - 뒤로

}

void loop() {

  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  delay(2000);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  delay(2000);

}
