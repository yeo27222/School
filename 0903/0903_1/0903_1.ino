//초음파 HC-SR04
//조도 Type1
//온습도 DHT-11
//접근 PIR

#define trigPin 8
#define echoPin 7

#include <DHT.h>
#define DHTPIN 10
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

#define PIR 12
int LED = 9;



long duration, distance;


void setup() {
    pinMode(PIR, INPUT);
    pinMode(LED, OUTPUT);
    
    Serial.begin (9600);
    pinMode (trigPin, OUTPUT); 
    pinMode (echoPin, INPUT);
    delay(1000);

    Serial.println("Start...");



}

void loop() {
    digitalWrite(trigPin, HIGH);
    delay(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = (duration/2) / 29.1;

    Serial.print("거리는 ");
    Serial.print(distance);
    Serial.println("cm");



     int val;
     val = analogRead(A0);
     Serial.print("조도는 ");
     Serial.println(val, DEC);
     delay(100);



     delay(2000);
     int h = dht.readHumidity();
     int t = dht.readTemperature();
     Serial.print("Humidity: ");
     Serial.print(h);
     Serial.print(" %\t");
     Serial.print("Temperature: ");
     Serial.print(t);
     Serial.println(" C");



      if(digitalRead(PIR) == HIGH) Serial.println("접근!");
      else Serial.println("감지된 물체 없음");
      delay(100);


}
