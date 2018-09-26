int LED1 = 8;
int LED2 = 3;


void setup() {

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

}

void loop() {

int i = 3;
int j= 2;
int k = 0;
for(k=0;k<2;k++){
  
  for(i=1;i<=3;i++){
  digitalWrite(LED1,HIGH);
  delay(500);
  digitalWrite(LED1,LOW);
  delay(500);  
}

for(j=1;j<=3;j++){
  digitalWrite(LED2,HIGH);
  delay(500);
  digitalWrite(LED2,LOW);
  delay(500);
}

}
for(i=1;i<=10;i++)
{
digitalWrite(LED1,HIGH);
digitalWrite(LED2,HIGH);
}

exit (0);
}

