int ir1=2;
int led1=6;
int led2=7;

int proxy1=0;
int proxy2=0;

void setup() 
{
  Serial.begin(9600);
  pinMode(ir1,INPUT);
  pinMode(led1,OUTPUT); 
  pinMode(led2,OUTPUT);
}

void loop(){
  proxy1=digitalRead(ir1);

if(proxy1==LOW)
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
//  Serial.println("The person is waiting");
  analogWrite(led2,10);
// delay(1000);
}
else
{
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
//  Serial.println("The cabin empty");
//  digitalWrite(led3,LOW);
//    delay(1000);
}

}
