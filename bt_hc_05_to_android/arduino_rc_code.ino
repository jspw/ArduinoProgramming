int left_motor_forward =2;
int right_motor_forward =3;
int left_motor_backward =4;
int right_motor_backward =5;
int left_motor_enable =6;
int right_motor_enable =7;
int led=13;


void setup()
{
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(13,OUTPUT);  
}

void loop()
{
  analogWrite(left_motor_enable,255);
  analogWrite(right_motor_enable,255);
  forward();
  delay(5000);
  digitalWrite(led,HIGH);
  delay(5000);
  digitalWrite(led,LOW);
  analogWrite(left_motor_enable,255);
  analogWrite(right_motor_enable,255);
  backward();
  delay(5000);
  digitalWrite(led,HIGH);
  delay(5000);
  digitalWrite(led,LOW);
  analogWrite(left_motor_enable,255);
  analogWrite(right_motor_enable,255);
  left();
  delay(5000);
  digitalWrite(led,HIGH);
  delay(5000);
  digitalWrite(led,LOW);
  analogWrite(left_motor_enable,255);
  analogWrite(right_motor_enable,255);
  right();
  delay(5000);
  digitalWrite(led,HIGH);
  delay(5000);
  digitalWrite(led,LOW);
  
  

}

