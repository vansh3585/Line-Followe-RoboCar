int r1,r2,r3,r4;
int buggypin5=5;
int buggypin6=6;
int buggypin7=7;
int buggypin8=8;

void forward()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  }
  void right(){
    digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
    }

    void left(){
       digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
      }
      void stopp(){
            digitalWrite(5,LOW);
             digitalWrite(6,LOW);
              digitalWrite(7,LOW);
  digitalWrite(8,LOW);
 
           
            }
void anti()
{
  digitalWrite(5,HIGH);
             digitalWrite(6,LOW);
              digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
}
void cloc()
{
  digitalWrite(5,LOW);
             digitalWrite(6,HIGH);
              digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
}
void left1()
{
 digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW); 
}
void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A2,INPUT);
  pinMode(A1,INPUT);
  pinMode(A3,INPUT);
  Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
 r1=digitalRead(A2);
 r2=digitalRead(A0);
 r3=digitalRead(A1);
 r4=digitalRead(A3);
 if(r1==1 && r2==1)
 {
   if(r3==0)
{
left1();
delay(75);
} 
else
{
forward();
}  
  
 }
else if(r1==0 && r2==0)
 {
   if(r3==0)
   {
if(r4==1)
anti();
else
cloc();
   }
   
   else
  forward();
 }
 else if(r1==1 && r2==0)
 {
   if(r3==0)
   {
left();
 delay(400);
   }
   else
   {
 left();
 delay(100);
 f1();
   }
 
 }
 else if(r1==0 && r2==1)
 {
   if(r3==0 && r2==0)
   {
right();
  delay(1500);
   }
   else
   {
  right();
  delay(150);
   }
 }
 
 else
 stopp();
}
void f1()
{
  left();
  delay(175);
}