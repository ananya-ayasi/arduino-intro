//Code to change the intensity of an LED with 5 seconds delay in between
void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(3,31);
  delay(5000);
  analogWrite(3,63);
  delay(5000);
  analogWrite(3,127);
  delay(5000);
  analogWrite(3,255);
  delay(5000);
}
