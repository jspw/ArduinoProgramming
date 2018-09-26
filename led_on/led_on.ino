int led = 8;
int led1 = 3;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
}

void loop()
{
  digitalWrite(led,HIGH); //led on
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
  digitalWrite(led1,HIGH); //led on
  delay(1000);
  digitalWrite(led1,LOW);
  delay(1000);

}

