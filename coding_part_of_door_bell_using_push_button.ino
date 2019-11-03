int pin = 2;
int pin1 = 8;
int switchPin;
int reading;
void setup(){
pinMode(2,INPUT);
pinMode(8,OUTPUT);
int reading = digitalRead(switchPin);
}
void loop(){
if(reading == HIGH)
{
  digitalWrite(2,HIGH);
}
else
{
  digitalWrite(2,LOW);
}
}
