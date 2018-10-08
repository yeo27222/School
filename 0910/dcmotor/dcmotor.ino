const int AIA = 3;
const int AIB = 4;
const int BIA = 5;
const int BIB = 6;

byte speed = 250;

void setup() {
  pinMode(AIA, OUTPUT);
  pinMode(AIB, OUTPUT);
  pinMode(BIA, OUTPUT);
  pinMode(BIB, OUTPUT);
}

void loop() {
  forward();
  delay(2000);
  backward();
  delay(2000);
}

void forward()
{
  analogWrite(AIA,50);
  analogWrite(AIB,100);
  analogWrite(BIA,50);
  analogWrite(BIB,100);
}

void backward()
{
  analogWrite(AIA,0);
  analogWrite(AIB,speed);
  analogWrite(BIA,0);
  analogWrite(BIB,speed);
}
