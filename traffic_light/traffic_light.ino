// Traffic light with 3 led using variable Resistor
int Red = 1;
int yellow = 7;
int green = 4;
const int analogpin = A5 ;
const int y = 400 ;
void setup()
{
    pinMode(Red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
}

void loop(){
  int x=analogRead(analogpin);
  if(x>y)
  {
     digitalWrite(green, LOW);
    digitalWrite(Red, HIGH);
    delay(3000);
    digitalWrite(Red, LOW);
    digitalWrite(yellow, HIGH);
    delay(1000);
    digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
    delay(2000);}
    else{
      digitalWrite(green,LOW);
      digitalWrite(yellow,LOW);
      digitalWrite(Red,LOW);
    
    
    
     }
}

