// ultrasonic with 3 leds to determine distance

int echopin=10;
int trigpin =6;
int distance;
int duration; 
int blue =5 ;
int red =3 ;
int x =7 ; 
void setup() {
  
pinMode (trigpin,OUTPUT);
pinMode(echopin,INPUT);
Serial.begin(9600);
pinMode (red,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(x,OUTPUT);


}
void loop () {
   digitalWrite(trigpin,LOW);
    delayMicroseconds (2);
    digitalWrite(trigpin,HIGH);
    digitalWrite(trigpin,LOW);
    duration=pulseIn(echopin,HIGH);
    distance=duration*.034/2 ;
    Serial.println (distance);
  if (distance<10) {
    digitalWrite(red,HIGH);
    digitalWrite(blue,LOW);
    digitalWrite(x,LOW);
    delay (2);}
else if ( distance >10 && distance <70 ) 
    { 
  digitalWrite(blue,HIGH);
   digitalWrite(x,LOW);
   digitalWrite(red,LOW);
   delay (2); }  
 else if (distance>70 && distance<200) 
 { 
    digitalWrite(x,HIGH);
     digitalWrite (blue ,LOW );
    delay (2); }
  else { digitalWrite(red, LOW);
    digitalWrite (blue ,LOW ); 
    digitalWrite(x,LOW);
 }
 
 
 
 
 
 
    }
