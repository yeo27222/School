#define trigPin 8
#define echoPin 9
int FAN = 7;
int BUZ = 10;

long duration, distance;

void setup() {
  pinMode(FAN, OUTPUT);
  pinMode(BUZ, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}


void loop() {
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance=(duration/2)/29.1;
  
  if(distance<10) {
    digitalWrite(FAN, LOW);
    digitalWrite(BUZ, HIGH);
    Serial.println("작동");
  }

  else {
    digitalWrite(FAN, HIGH);
    digitalWrite(BUZ, LOW);
    Serial.println("중지");
  }
}
