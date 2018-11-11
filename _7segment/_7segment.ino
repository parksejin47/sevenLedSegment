/*
  2018.11.11
  made by sejinPark
 */


void setup() {
 //set pinMode
  for (int a = 2; a <= 11; a++)
  {
    pinMode(a, OUTPUT); 
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
//write number"zero"
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
//write number"one"
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
//write number"two"
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
//write number"three"
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
//write number"four"
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
//write number"five"
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
//write number"six"
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
//write number"seven"
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
//write number"eight"
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
//write number"nine"
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


