int main()
{
   setup();
   loop();
   return 0;
}

char ch=' ';
int i=0;

void setup()
{
  Serial.begin(9600);
  for(i=6;i<10;i++) 
      pinMode(i,OUTPUT);
  Serial.println("ok!");
}

void loop()
{
  if(Serial.available()>0)
  {
  	ch=Serial.read();
    switch(ch)
    {
     case 'f':
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      break;
     case 'b':
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(8,LOW);
      break;
     case 'r':
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      break;
     case 'l':
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(8,LOW);
      break;
     case 's':
      for(i=6;i<10;i++)
          digitalWrite(i,LOW);
      break;
     default:
      break;
    }
  }
}

