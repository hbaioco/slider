
#include <Servo.h>
Servo myservo; // criar o objeto myservo pra controlar o servo motor.

int pos = 80;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(6); // saída pro servo motor
  pinMode(2,INPUT_PULLUP); //botão 1 do slider
  pinMode(3,INPUT_PULLUP); // botão 2 do slider
  pinMode(8, OUTPUT); // pino que muda a direção do movimento
  pinMode(9, OUTPUT); // pino que faz movimentar
}

void loop() {

/*digitalWrite(9, HIGH);
delay(1);
digitalWrite(9,LOW);
delay(1);*/

for (pos = 80; pos <= 105; pos +=1){
  myservo.write(pos);
  delay(200);
  digitalWrite(9, HIGH);
  delay(1);
  digitalWrite(9,LOW);
  delay(1);
}

for (pos = 105; pos >= 80; pos -=1){
 myservo.write(pos);
 delay(200);
 digitalWrite(9, HIGH);
 delay(1);
 digitalWrite(9,LOW);
 delay(1);
}

if (digitalRead(2) == LOW)
{
pos = 80;  
digitalWrite(8,HIGH);
}

if (digitalRead(3) == LOW)
{
pos = 105;  
digitalWrite(8,LOW);
}
}
