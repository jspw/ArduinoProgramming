int LED1 = 13; // Two pins are defined here for OUTPUT purposes
int LED2 = 10;
int n;

void setup() {

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED1, HIGH);
  delay(500);
  digitalWrite(LED1, LOW);
  delay(500);
  digitalWrite(LED1, HIGH);
  delay(500);
  digitalWrite(LED1, LOW);
  delay(500);
  delay(2000);
  
  for(int i=3;i<10;i++)
    {
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
                break;
                
            else if(i==j+1){
              for(n=1; n<=i; n++){
                digitalWrite(LED1, HIGH);
                delay(500);
                digitalWrite(LED1, LOW);
                delay(500);
              }

              delay(2000);
            }
                
        }
    }
    exit(0);
}
