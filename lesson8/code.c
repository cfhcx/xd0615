//输入串行上拉;pinMode(pin, INPUT_PULLUP)
/*上拉电阻（pullup resistor）,目的是使在断路的时候，这一点变成高电压（5V）。
当变成通路的时候，电压就会降下来;上拉电阻原本就在arduino板子里，其一端与VCC5V始终连接着*/
//pinMode(KEY1, INPUT);   端口没接那个电阻的另一端
//pinMode(KEY1, INPUT_PULLUP);  端口在板子通过这个上拉电阻，达到VCC5V
void setup() 
{
  // 开启串行通信，并设置其频率为9600
  Serial.begin(9600);
  // 配置2号针脚为输入状态
  // 并设置使用内部上拉电阻
  pinMode(2, INPUT_PULLUP);
  // 定义LED输入针脚号为13号针脚
  // 此LED是Arduino UNO电路板自带
  pinMode(13, OUTPUT);
}

void loop()
 {
  // 读取2号针脚上的输入信号的数值
  int sensorVal = digitalRead(2);
  //将获取到的数值打印到串行调试窗口
  Serial.println(sensorVal);
  // 如果获取到的数值为HIGH(数值大小等于1)
  // 则向13号针脚发送LOW信号(数值大小等于0)，熄灭LED灯，
  // 反之则发送HIGH信号(数值大小等于1)，点亮LED灯
  if (sensorVal == HIGH)
    digitalWrite(13, LOW);
  else 
    digitalWrite(13, HIGH);
}