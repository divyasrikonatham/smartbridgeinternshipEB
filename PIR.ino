const int BUTTON =5;
const int LED =2;
int PIRstate;
void setup()
{
  Serial.begin(115200);
 pinMode(LED,OUTPUT);
 pinMode(BUTTON,INPUT);

}

void loop()
{
  PIRstate=digitalRead(5);
  if(PIRstate==HIGH)
  {
    Serial.println("PERSON DETECTED");
    digitalWrite(LED,LOW);
  }
  else
  {
    Serial.println("PERSON NOT  DETECTED");
    digitalWrite(LED,HIGH);
    
  }
 

}
