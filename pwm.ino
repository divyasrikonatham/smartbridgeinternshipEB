const int ledPin= 16;
const int freq = 5000;
const int ledChannel=0;
const int resolution=8;
void setup() {
  ledcSetup(ledChannel,freq,resolution);
  ledcAttachPin(ledPin,ledChannel);
  // put your setup code here, to run once:

}

void loop() {
  for(int dutyCycle =0;dutyCycle<=255;dutyCycle++)
  {
    ledcWrite(ledChannel,dutyCycle);
    delay(15);
  }
  for(int duty=255;dutyCycle>=0;dutyCycle--)
  {
    ledcWrite(ledChannel,dutyCycle);
    delay(15);
  }
  // put your main code here, to run repeatedly:

}
