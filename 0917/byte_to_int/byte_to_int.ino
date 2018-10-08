int cnt = 0;
byte bbb;
String msg;

void setup() {
  Serial.begin(9600);
}

void loop() {
  bbb = byte(cnt++);
  msg = String(bbb);
  Serial.println(msg);
  delay(3000);
}
