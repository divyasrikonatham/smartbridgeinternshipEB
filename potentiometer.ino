const int POT =5;
const int LED =4;
int BUTTONstate=0;
void setup()
{
  Serial.begin(115200);
 pinMode(LED,OUTPUT);
 pinMode(POT,INPUT);

}

void loop()
{
  BUTTONstate=analogRead(BUTTON);
  if(BUTTONstate>=6)
  {
    Serial.println("BUTTONstate");
    digitalWrite(LED,LOW);
  }
  else
  {
    Serial.println("BUTTONstate");
    digitalWrite(LED,HIGH);
    
  }

}
