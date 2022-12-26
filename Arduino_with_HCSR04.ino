const int trigger_pin = 12; 
const int echo_pin = 13; 
int uyariLed = 2;
int buzzer = 6; 

int sure ; 
int mesafe ; 

void setup() {

pinMode(uyariLed , OUTPUT);
pinMode(buzzer , OUTPUT); 

pinMode(trigger_pin , OUTPUT); 

pinMode(echo_pin , INPUT); 

}
void loop()

{

digitalWrite(trigger_pin , HIGH);

delayMicroseconds(1000);

digitalWrite(trigger_pin , LOW);

sure = pulseIn(echo_pin , HIGH); 

mesafe = (sure / 2) / 29.1; 


if (mesafe <= 10) 
{

digitalWrite(uyariLed , HIGH);
digitalWrite(buzzer , HIGH);

}
else if(mesafe>10 && mesafe<=20) 
{
digitalWrite(uyariLed , HIGH);
digitalWrite(buzzer , HIGH);
delay(150); 
digitalWrite(uyariLed , LOW);
digitalWrite(buzzer , LOW);
delay(250);
}
else if(mesafe>20 && mesafe<=30) 
{
digitalWrite(uyariLed , HIGH);
digitalWrite(buzzer , HIGH);
delay(150);
digitalWrite(uyariLed , LOW);
digitalWrite(buzzer , LOW);
delay(450);
}
else if(mesafe>30 && mesafe<=40) 
{
digitalWrite(uyariLed , HIGH);
digitalWrite(buzzer , HIGH);
delay(150);
digitalWrite(uyariLed , LOW);
digitalWrite(buzzer , LOW);
delay(650);
}
else if(mesafe>40 && mesafe<=50) 
{
digitalWrite(uyariLed , HIGH);
digitalWrite(buzzer , HIGH);
delay(150);
digitalWrite(uyariLed , LOW);
digitalWrite(buzzer , LOW);
delay(850);
}
}
