#include <Servo.h> 
int Sen1 = 0; //Extremo izquierd0
int Sen2 = 1; //centro iz
int Sen3 = 2; //centro der
int Sen4 = 3; //Extremo derecho

int Val1 = 0;
int Val2 = 0;
int Val3 = 0;
int Val4 = 0;


Servo servo1;
Servo servo2;

int x1= 790;//800 840
int x2=750; //Diferencia entre negro y blanco (Valor > x = Negro).
int x3= 700;
int x4= 695;//750

void setup()
{

servo1.attach(6);// pin del servo derecho
servo2.attach(9);// pin del servo izquierda
Serial.begin(9600);
}

void loop()
{
  Val1 = analogRead(Sen1);//valor del sen1
  Val2 = analogRead(Sen2);//valor del sen2
  Val3 = analogRead(Sen3);//valor del sen3
  Val4 = analogRead(Sen4);//valor del sen4
  

 
    if ((Val1 < x1)&& (Val2 < x2)&&(Val3 < x3)&& (Val4 < x4))
      {
        servo1.write(140);//150
        servo2.write(60);//50
      }  
  
    else if ((Val1 < x1)&& (Val2 < x2)&&(Val3 > x3)&& (Val4 < x4))
      {
        servo1.write(96);
        servo2.write(70);//50
      }
    else if ((Val1 < x1)&& (Val2 > x2)&&(Val3 < x3)&& (Val4 < x4))
      {
        servo1.write(105);//110
        servo2.write(93);
      }
    else if ((Val1 < x1)&& (Val2 < x2)&&(Val3 > x3)&& (Val4 > x4))
      {
        servo1.write(93);
        servo2.write(70);
      }
     else if ((Val1 < x1)&& (Val2 < x2)&&(Val3 > x3)&& (Val4 > x4))
      {
        servo1.write(105);
        servo2.write(97);
      }
      
        else if ((Val2 > x2)&&(Val3 > x3))//((Val1 > x1)&& (Val2 > x2)&&(Val3 > x3)&& (Val4 > x4))
      {
        if((servo1.read()==105))
        {
          if(Val1 > x1)
          {
            
        servo1.write(150);
        servo2.write(50);
        delay(200);
        servo1.write(93);
        servo2.write(93);
        delay(30000);
            
          }
          else if(servo2.read()==70)
          {
            if(Val4 > x4)
          {
            
        servo1.write(150);
        servo2.write(50);
        delay(200);
        servo1.write(93);
        servo2.write(93);
        delay(30000);
            
          }
          }
        }
        
        
      }
      /*Serial.print("Sen1:");
      Serial.print(Val1);
      Serial.print("Sen2:");
      Serial.print(Val2);
      Serial.print("Sen3:");
      Serial.print(Val3);
      Serial.print("Sen4:");
      Serial.println(Val4);*/
}
