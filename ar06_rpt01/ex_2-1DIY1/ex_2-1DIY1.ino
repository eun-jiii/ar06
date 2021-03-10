int number = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("AR06");
}
    // 9600bps로 시리얼 통신 설정


void loop() {
  Serial.print(number*200);
  Serial.println(" nsec");
  delay(200);
  number++;

if (number<5000) {
  number += 200;
}else{
  number=0;
}
}
