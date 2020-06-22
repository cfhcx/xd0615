
int pinInterrupt=2;
int i=0; 

//中断服务程序
void myfunc()
{   
  while(digitalRead(pinInterrupt))
  { 
    byte a=0;
    for(i=0;i<10;i++)
    {
      a=i;
      digitalWrite(3,a&0x1);
      digitalWrite(4,(a>>1)&0x1);
      digitalWrite(5,(a>>2)&0x1);
      digitalWrite(6,(a>>3)&0x1);
      delay(1000);
      
      //按下开关，2变低，低电平清零，重新计数
      if(digitalRead(pinInterrupt)==LOW) 
      {
       digitalWrite(3,0);
       digitalWrite(4,0);
       digitalWrite(5,0);
       digitalWrite(6,0);
       delay(1000);
       break;
      }
    }
  }
}

 
void setup()
{
  pinMode(3,OUTPUT);//输入1
  pinMode(4,OUTPUT);//输入2
  pinMode(5,OUTPUT);//输入3
  pinMode(6,OUTPUT);//输入4
  pinMode(7,OUTPUT);//指示灯测试
  pinMode(8,OUTPUT);//空白
  pinMode(9,OUTPUT);//销锁启用
  
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  
  Serial.begin(9600); //初始化串口
  
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), myfunc, HIGH);
  //高电平触发
}
 
void loop()
{
  
}