#define PIR 10
int FAN = 7;

void setup() {
  pinMode(PIR, INPUT);
  pinMode(FAN, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  if(digitalRead(PIR)==HIGH) digitalWrite(FAN, LOW);
  else digitalWrite(FAN, HIGH);
  delay(200);
}
