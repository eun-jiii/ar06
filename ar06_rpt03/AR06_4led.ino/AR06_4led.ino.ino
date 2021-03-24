int ledR = 3;
int ledG = 5;
int ledB = 6;
int ledY = 9;

int dimTime = 20;
void setup() {
  
}
void loop() {
  for(int fadeValue = 0; fadeValue <= 255; fadeValue+=5){
    analogWrite(ledR, fadeValue);
    delay(dimTime);
  }
  for(int fadeValue = 255; fadeValue >=0; fadeValue -=5){
    analogWrite(ledR, fadeValue);
    delay(dimTime);
}
for(int fadeValue = 0; fadeValue <= 255; fadeValue +=5){
  analogWrite(ledG, fadeValue);
  delay(dimTime);
}
}
