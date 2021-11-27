void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT_PULLUP);
  pinMode(3,INPUT_PULLUP);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {

digitalWrite(9, HIGH);
delay(1);
digitalWrite(9,LOW);
delay(1);

if (digitalRead(2) == LOW)
{
digitalWrite(8,HIGH);
}
if (digitalRead(3) == LOW)
{
digitalWrite(8,LOW);
}
}
