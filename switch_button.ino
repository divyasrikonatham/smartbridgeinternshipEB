const int BUTTON =5;
const int LED =4;
int BUTTONstate=0;
void setup()
{
  Serial.begin(115200);
 pinMode(LED,OUTPUT);
 pinMode(BUTTON,INPUT);

}

void loop()
{
  BUTTONstate=digitalRead(BUTTON);
  if(BUTTONstate==HIGH)
  {
    Serial.println("HIGH");
    digitalWrite(LED,LOW);
  }
  else
  {
    Serial.println("LOW");
    digitalWrite(LED,HIGH);
    
  }
 

}
