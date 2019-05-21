const int trigPin = 4;
const int echoPin=5;
long duration;
int distance;
void setup()
{
  
  pinMode(2,OUTPUT); 
  pinMode(12,OUTPUT); 
  pinMode(13,OUTPUT); 
  pinMode(14,OUTPUT); 
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(115200);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;
  Serial.print("Distance");

  Serial.println(distance);
  if(distance>5&&distance<20)
  {
    digitalWrite(2,HIGH);
  }
  else if(distance>20&&distance<100)
  {
    digitalWrite(12,HIGH);
  }
  else if(distance>100&&distance<200)
  {
    digitalWrite(13,HIGH);
  }
  else if(distance>200&&distance<500)
  {
    digitalWrite(14,HIGH);
  }
}
