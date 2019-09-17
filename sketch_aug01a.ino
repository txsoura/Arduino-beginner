const int ledpin=13;
void setup() {
  // put your setup code here, to run once:
//Serial.begin(9600);
pinMode(ledpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledpin, HIGH);
delay(3000);
digitalWrite(ledpin, LOW);
delay(3000);
}
