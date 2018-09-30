  int vSpeed = 110;        // MAX 255
  int turn_speed = 230;    // MAX 255 
  int turn_delay = 10;
  
//L293 Connection   
  const int motorA1      = 8;  
  const int motorA2      = 10; 
  const int motorAspeed  = 9;
  const int motorB1      = 12; 
  const int motorB2      = 13; 
  const int motorBspeed  = 11;

//Sensor Connection
  const int left_sensor_pin =A0;
  const int right_sensor_pin =A1;

  
  
  int left_sensor_state;
  int right_sensor_state;

void setup() {
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);

  Serial.begin(9600);

  delay(3000);
  
}

void loop() {
  

  


left_sensor_state = analogRead(left_sensor_pin);
right_sensor_state = analogRead(right_sensor_pin);

if(right_sensor_state > 500 && left_sensor_state < 500)
{
  Serial.println("turning right");

  digitalWrite (motorA1,LOW);
  digitalWrite(motorA2,HIGH);                       
  digitalWrite (motorB1,LOW);
  digitalWrite(motorB2,HIGH);

  analogWrite (motorAspeed, vSpeed);
  analogWrite (motorBspeed, turn_speed);
  
  }
if(right_sensor_state < 500 && left_sensor_state > 500)
{
  Serial.println("turning left");
  
  digitalWrite (motorA1,HIGH);
  digitalWrite(motorA2,LOW);                       
  digitalWrite (motorB1,HIGH);
  digitalWrite(motorB2,LOW);

  analogWrite (motorAspeed, turn_speed);
  analogWrite (motorBspeed, vSpeed);

  delay(turn_delay);
  }

if(right_sensor_state > 500 && left_sensor_state > 500)
{
  Serial.println("going forward");

  digitalWrite (motorA2,LOW);
  digitalWrite(motorA1,HIGH);                       
  digitalWrite (motorB2,HIGH);
  digitalWrite(motorB1,LOW);

  analogWrite (motorAspeed, vSpeed);
  analogWrite (motorBspeed, vSpeed);

  delay(turn_delay);
  
  }

if(right_sensor_state < 500 && left_sensor_state < 500)
{ 
  Serial.println("stop");
  
  analogWrite (motorAspeed, 0);
  analogWrite (motorBspeed, 0);
  
  }

 
}










 
