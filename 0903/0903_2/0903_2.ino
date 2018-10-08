#define PIR 12
int LED = 9;
void setup()
{
  pinMode(PIR, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);  
  Serial.println("Start...");
}
void loop()
{
  if(digitalRead(PIR) == HIGH) digitalWrite(LED, HIGH);
  else digitalWrite(LED, LOW);
  delay(10);
}
