const int AIA = 3;
const int AIB = 4;
const int BIA = 5;
const int BIB = 6;

byte speed = 255;

int cnt = 0;
byte bbb;
String myString;


void forward()
{
  analogWrite(AIA,speed);
  analogWrite(AIB,0);
  analogWrite(BIA,speed);
  analogWrite(BIB,0);
}

void backward()
{
  analogWrite(AIA,0);
  analogWrite(AIB,speed);
  analogWrite(BIA,0);
  analogWrite(BIB,speed);
}

void setup() {
  pinMode(AIA, OUTPUT);
  pinMode(AIB, OUTPUT);
  pinMode(BIA, OUTPUT);
  pinMode(BIB, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  while (Serial.available())  //while ; ~하는 동안에만  //available ; 통신 상대방이 입력하고 enter키를 치는 순간을 잡는 함수
  {
    char myChar = (char)Serial.read();  //(char) ; 형변환자
    myString += myChar;   // += ; B의값을 통째로 A 뒤에 그대로 붙여라 -> 각각 따로 입력된 char값을 붙여서 myStirng으로 넣어라
    delay(05);
    }

  if(!myString.equals("")){   //! ; ~하지 않을 때(부정) -> 비어있지 않을 때   //equals;동일한  // -->> myString이 ""(공백)과 동일하지 않을 때 >>> myString이 비어있지 않을 때
    Serial.println("Input Value : " + myString);
    int ccc = myString.toInt(); //to : ~로 변환  //myString을 toInt인트로 변환하여 ccc라는 방에 넣음
    speed = (byte)ccc;  //ccc라는 방에 있는 값을 byte로 변환 > 숫자를 입력하지 않으면 정수로 변환되지 않아 오류
    myString = "";
    }
    
  forward();
  delay(2000);
  backward();
  delay(2000);
}
