#include <Servo.h> 
int Sharp=4;
int val=0;

int Sen1=0;
int Sen2=1;
int Sen3=2;
int Sen4=3;

int Val1=0;
int Val2=0;
int Val3=0;
int Val4=0;

int x1=290;//lectura sensor en el piso
int x2=110;//lectura del vacio

int a1=900;
int a2=900;
int a3=900;
int a4=900;

Servo servo1;//servo derecho
Servo servo2;//servo izquierdo

void setup()
{
  servo1.attach(6);// pin del servo derecho
  servo2.attach(9);// pin del servo izquierdo

  Serial.begin(9600); 
}

void loop()
{
  

  val = analogRead(Sharp);//lee el sensor de distancia

  if( val>x1 )// Si encuentra suelo avanza hacia adelante
  {
    servo1.write(108);
    servo2.write(67);
 
  }
  else if( val<x2 )//si encuentra vacio se detiene y gira hacia a la derecha
  {
    servo1.write(93);
    servo2.write(93);
    delay(2000);
      //giro a la derecha
    servo1.write(90);//giro 90 grados
    servo2.write(90);//giro 90 grados
    delay(2050);
   
   val = analogRead(Sharp);// lee la intensidad del sensor de distacia 
   if( val>x1 )//si encuentra suelo avanza hacia adelante
    {
      servo1.write(108);
      servo2.write(67);
      
      Val1=analogRead(Sen1);
    Val2=analogRead(Sen2);
    Val3=analogRead(Sen3);
    Val4=analogRead(Sen4);
    if ((Val1 > a1)&& (Val2 > a2)&&(Val3 > a3)&& (Val4 > a4))
      {
        servo1.write(108);
        servo2.write(67);
        delay(200);
        servo1.write(93);
        servo2.write(93);
        delay(30000);
      }
    }
    else if( val<x1 )//si no encuentra suelo gira a la izqueirda
    {
      //giro a la izquierda
      servo1.write(96);//giro 180 grados
      servo2.write(96);//giro 180 grados
      delay(3790);
      
      val = analogRead(Sharp);//lee el valor del sensor
      if( val>x1 )// si encuentra camino avanza hacia adelante
      {
        servo1.write(108);
        servo2.write(67);
        
        Val1=analogRead(Sen1);
    Val2=analogRead(Sen2);
    Val3=analogRead(Sen3);
    Val4=analogRead(Sen4);
    if ((Val1 > a1)&& (Val2 > a2)&&(Val3 > a3)&& (Val4 > a4))
      {
        servo1.write(108);
        servo2.write(67);
        delay(200);
        servo1.write(93);
        servo2.write(93);
        delay(30000);
      }
      }
      else if( val<x1 )
      {
        servo1.write(96);//giro 90 grados
        servo2.write(96);//giro 90 grados
        delay(1870);
        
        servo1.write(108);
        servo2.write(67);
        delay(1800);
        Val1=analogRead(Sen1);
    Val2=analogRead(Sen2);
    Val3=analogRead(Sen3);
    Val4=analogRead(Sen4);
    if ((Val1 > a1)&& (Val2 > a2)&&(Val3 > a3)&& (Val4 > a4))
      {
        servo1.write(108);
        servo2.write(67);
        delay(200);
        servo1.write(93);
        servo2.write(93);
        delay(30000);
      }
        
        servo1.write(93);
        servo2.write(93);
        delay(2000);
        
          //giro a la derecha
        servo1.write(90);//giro 90 grados
        servo2.write(90);//giro 90 grados
        delay(2050);
     
         val = analogRead(Sharp);// lee la intensidad del sensor de distacia 
       if( val>x1 )//si encuentra suelo avanza hacia adelante
        {
          servo1.write(108);
          servo2.write(67);
          Val1=analogRead(Sen1);
    Val2=analogRead(Sen2);
    Val3=analogRead(Sen3);
    Val4=analogRead(Sen4);
    if ((Val1 > a1)&& (Val2 > a2)&&(Val3 > a3)&& (Val4 > a4))
      {
        servo1.write(108);
        servo2.write(67);
        delay(200);
        servo1.write(93);
        servo2.write(93);
        delay(30000);
      }
        }
        else if( val<x1 )//si no encuentra suelo gira a la izqueirda
        {
      //giro a la izquierda
        servo1.write(96);//giro 180 grados
        servo2.write(96);//giro 180 grados
        delay(3790);
      
        val = analogRead(Sharp);//lee el valor del sensor
        if( val>x1 )// si encuentra camino avanza hacia adelante
        {
          servo1.write(108);
          servo2.write(67);
          Val1=analogRead(Sen1);
    Val2=analogRead(Sen2);
    Val3=analogRead(Sen3);
    Val4=analogRead(Sen4);
    if ((Val1 > a1)&& (Val2 > a2)&&(Val3 > a3)&& (Val4 > a4))
      {
        servo1.write(108);
        servo2.write(67);
        delay(200);
        servo1.write(93);
        servo2.write(93);
        delay(30000);
      }
        }
      
      else if( val<x1 )
      {
        servo1.write(96);//giro 90 grados
        servo2.write(96);//giro 90 grados
        delay(1870);
        
        servo1.write(108);
        servo2.write(67);
        delay(1800);
        Val1=analogRead(Sen1);
    Val2=analogRead(Sen2);
    Val3=analogRead(Sen3);
    Val4=analogRead(Sen4);
    if ((Val1 > a1)&& (Val2 > a2)&&(Val3 > a3)&& (Val4 > a4))
      {
        servo1.write(108);
        servo2.write(67);
        delay(200);
        servo1.write(93);
        servo2.write(93);
        delay(30000);
      }
        
        servo1.write(93);
        servo2.write(93);
        delay(2000);
        
          //giro a la derecha
        servo1.write(90);//giro 90 grados
        servo2.write(90);//giro 90 grados
        delay(2050);
   
       val = analogRead(Sharp);// lee la intensidad del sensor de distacia 
       if( val>x1 )//si encuentra suelo avanza hacia adelante
        {
          servo1.write(108);
          servo2.write(67);
          Val1=analogRead(Sen1);
    Val2=analogRead(Sen2);
    Val3=analogRead(Sen3);
    Val4=analogRead(Sen4);
    if ((Val1 > a1)&& (Val2 > a2)&&(Val3 > a3)&& (Val4 > a4))
      {
        servo1.write(108);
        servo2.write(67);
        delay(200);
        servo1.write(93);
        servo2.write(93);
        delay(30000);
      }
        }
        else if( val<x1 )//si no encuentra suelo gira a la izqueirda
        {
          //giro a la izquierda
          servo1.write(96);//giro 180 grados
          servo2.write(96);//giro 180 grados
          delay(3790);
      
          val = analogRead(Sharp);//lee el valor del sensor
          if( val>x1 )// si encuentra camino avanza hacia adelante
          {
            servo1.write(108);
            servo2.write(67);
            Val1=analogRead(Sen1);
    Val2=analogRead(Sen2);
    Val3=analogRead(Sen3);
    Val4=analogRead(Sen4);
    if ((Val1 > a1)&& (Val2 > a2)&&(Val3 > a3)&& (Val4 > a4))
      {
        servo1.write(108);
        servo2.write(67);
        delay(200);
        servo1.write(93);
        servo2.write(93);
        delay(30000);
      }
          }
            else if( val<x1 )
            {
            servo1.write(96);//giro 90 grados
            servo2.write(96);//giro 90 grados
            delay(1870);
        
            servo1.write(108);
            servo2.write(67);
            delay(1800);
            
            Val1=analogRead(Sen1);
    Val2=analogRead(Sen2);
    Val3=analogRead(Sen3);
    Val4=analogRead(Sen4);
    if ((Val1 > a1)&& (Val2 > a2)&&(Val3 > a3)&& (Val4 > a4))
      {
        servo1.write(108);
        servo2.write(67);
        delay(200);
        servo1.write(93);
        servo2.write(93);
        delay(30000);
      }
        
            servo1.write(93);
            servo2.write(93);
            delay(2000);
        
          //giro a la derecha
            servo1.write(90);//giro 90 grados
            servo2.write(90);//giro 90 grados
            delay(2050);
   
       val = analogRead(Sharp);// lee la intensidad del sensor de distacia 
       if( val>x1 )//si encuentra suelo avanza hacia adelante
            {
              servo1.write(108);
              servo2.write(67);
              
              Val1=analogRead(Sen1);
    Val2=analogRead(Sen2);
    Val3=analogRead(Sen3);
    Val4=analogRead(Sen4);
    if ((Val1 > a1)&& (Val2 > a2)&&(Val3 > a3)&& (Val4 > a4))
      {
        servo1.write(108);
        servo2.write(67);
        delay(200);
        servo1.write(93);
        servo2.write(93);
        delay(30000);
      }
            }
      else if( val<x1 )//si no encuentra suelo gira a la izqueirda
            {
      //giro a la izquierda
          servo1.write(96);//giro 180 grados
          servo2.write(96);//giro 180 grados
          delay(3790);
      
            val = analogRead(Sharp);//lee el valor del sensor
          if( val>x1 )// si encuentra camino avanza hacia adelante
            {
              servo1.write(108);
              servo2.write(67);
              
              Val1=analogRead(Sen1);
    Val2=analogRead(Sen2);
    Val3=analogRead(Sen3);
    Val4=analogRead(Sen4);
    if ((Val1 > a1)&& (Val2 > a2)&&(Val3 > a3)&& (Val4 > a4))
      {
        servo1.write(108);
        servo2.write(67);
        delay(200);
        servo1.write(93);
        servo2.write(93);
        delay(30000);
      }
            }
          else if( val<x1 )
            {
            servo1.write(96);//giro 90 grados
            servo2.write(96);//giro 90 grados
            delay(1870);
        
            servo1.write(108);
            servo2.write(67);
            delay(1800);
            
            Val1=analogRead(Sen1);
    Val2=analogRead(Sen2);
    Val3=analogRead(Sen3);
    Val4=analogRead(Sen4);
    if ((Val1 > a1)&& (Val2 > a2)&&(Val3 > a3)&& (Val4 > a4))
      {
        servo1.write(108);
        servo2.write(67);
        delay(200);
        servo1.write(93);
        servo2.write(93);
        delay(30000);
      }
        
            servo1.write(93);
            servo2.write(93);
            delay(2000);
        
            //giro a la derecha
            servo1.write(90);//giro 90 grados
            servo2.write(90);//giro 90 grados
            delay(2050);
   
             val = analogRead(Sharp);// lee la intensidad del sensor de distacia 
             if( val>x1 )//si encuentra suelo avanza hacia adelante
                {
                  servo1.write(108);
                  servo2.write(67);
                  
                  Val1=analogRead(Sen1);
    Val2=analogRead(Sen2);
    Val3=analogRead(Sen3);
    Val4=analogRead(Sen4);
    if ((Val1 > a1)&& (Val2 > a2)&&(Val3 > a3)&& (Val4 > a4))
      {
        servo1.write(108);
        servo2.write(67);
        delay(200);
        servo1.write(93);
        servo2.write(93);
        delay(30000);
      }
                }
              else if( val<x1 )//si no encuentra suelo gira a la izqueirda
                {
              //giro a la izquierda
                  servo1.write(96);//giro 180 grados
                  servo2.write(96);//giro 180 grados
                  delay(3790);
      
              val = analogRead(Sharp);//lee el valor del sensor
              if( val>x1 )// si encuentra camino avanza hacia adelante
                {
                    servo1.write(108);
                    servo2.write(67);
                    
                    Val1=analogRead(Sen1);
    Val2=analogRead(Sen2);
    Val3=analogRead(Sen3);
    Val4=analogRead(Sen4);
    if ((Val1 > a1)&& (Val2 > a2)&&(Val3 > a3)&& (Val4 > a4))
      {
        servo1.write(108);
        servo2.write(67);
        delay(200);
        servo1.write(93);
        servo2.write(93);
        delay(30000);
      }
                }
                }
            }
            }
            }
        }
      }
        }
      }
    }
  }
}










