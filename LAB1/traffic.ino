int pinr=13;
int piny=12;
int ping=8;
void setup() {
  // put your setup code here, to run once:
pinMode(pinr,OUTPUT);
pinMode(piny,OUTPUT);
pinMode(ping,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(pinr,HIGH);
digitalWrite(piny,LOW);
digitalWrite(ping,LOW);
delay(500);
digitalWrite(pinr,LOW);
digitalWrite(piny,HIGH);
digitalWrite(ping,LOW);
delay(500);
digitalWrite(pinr,LOW);
digitalWrite(piny,LOW);
digitalWrite(ping,HIGH);
delay(500);

}
