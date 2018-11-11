//int count [11][10]{
//  {1,1,1,1,1,1,1,1,1,1},//다끈거
//  {1,1,1,1,1,1,1,1,1,1},
//};


void setup() {
  // put your setup code here, to run once:
  for (int a = 2; a <= 11; a++)
  {
    pinMode(a, OUTPUT); //안녕하세요 4,9 뭐시기 마이너스ss
    digitalWrite(a, HIGH);
  }
  //2번은 가운데-
  //3번 왼쪽 위 |
  //5번 위 -
  //6번 오른쪽 위 ㅣ
  //7번 왼쪽 아래 ㅣ
  //8번 아래 ㅡ
  //10번 오른쪽 아래 ㅣ
  //11번 점
}
void zero() {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);


}
void one() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
}
void two() {
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
}
void three() {
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
}
void four() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
}
void five() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
}

void six() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
}
void seven() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
}
void eight() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);


}
void nine() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
}
void dot() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
}



void loop() {
  // put your main code here, to run repeatedly:
  zero();
  delay(1000);
  one();
  delay(1000);
  two();
  delay(1000);
  three();
  delay(1000);
  four();
  delay(1000);
  five();
  delay(1000);
  six();
  delay(1000);
  seven();
  delay(1000);
  eight();
  delay(1000);
  nine();
  delay(1000);
  dot();
  delay(1000);  
}


