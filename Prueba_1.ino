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

int x = 750; //Diferencia entre negro y blanco (Valor > x = Negro).740



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
  

 
    if ((Val1 < x)&& (Val2 < x)&&(Val3 < x)&& (Val4 < x))
      {
        servo1.write(150);
        servo2.write(50);
      }  
  
    else if ((Val1 < x)&& (Val2 < x)&&(Val3 > x)&& (Val4 < x))
      {
        servo1.write(96);
        servo2.write(50);
      }
    else if ((Val1 < x)&& (Val2 > x)&&(Val3 < x)&& (Val4 < x))
      {
        servo1.write(110);
        servo2.write(93);
      }
    else if ((Val1 < x)&& (Val2 < x)&&(Val3 > x)&& (Val4 > x))
      {
        servo1.write(93);
        servo2.write(20);
      }
     else if ((Val1 < x)&& (Val2 < x)&&(Val3 > x)&& (Val4 > x))
      {
        servo1.write(110);
        servo2.write(97);
      }
     /* Serial.print("Sen1:");
      Serial.print(Val1);
      Serial.print("Sen2:");
      Serial.print(Val2);
      Serial.print("Sen3:");
      Serial.print(Val3);
      Serial.print("Sen4:");
      Serial.println(Val4);*/
   }
    
