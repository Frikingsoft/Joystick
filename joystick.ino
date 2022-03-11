#include "Keyboard.h"
#define Triangulo 2
#define Cuadrado 3
#define Circulo 4
#define X 5
#define Select 6
#define Pausa 7
#define R1 8
#define R2 9
#define L1 10
#define L2 16
#define KEY_ENTER 0xE0

unsigned long tiempo1 = 0;
unsigned long tiempo2 = 0;
void setup()
{
  pinMode(Triangulo, INPUT_PULLUP);
  pinMode(Cuadrado, INPUT_PULLUP);
  pinMode(Circulo, INPUT_PULLUP);
  pinMode(X, INPUT_PULLUP);
  pinMode(Select, INPUT_PULLUP);
  pinMode(Pausa, INPUT_PULLUP);
  pinMode(R1, INPUT_PULLUP);
  pinMode(R2, INPUT_PULLUP);
  pinMode(L1, INPUT_PULLUP);
  pinMode(L2, INPUT_PULLUP);
  Keyboard.begin();
  tiempo1 = millis();
}

void loop()
{
  tiempo2 = millis();
  if (tiempo2 > (tiempo1 + 8))
  {
    int x = analogRead(0);
    int y = analogRead(1);
  
//-------------------------------------------------
    if (y > 900)
    {
      Keyboard.press(KEY_DOWN_ARROW);
    }
    else
    {
      Keyboard.release(KEY_DOWN_ARROW);
    }
//--------------------------------------------------
    if (y < 200)
    {
      Keyboard.press(KEY_UP_ARROW);
    }
    else
    {
      Keyboard.release(KEY_UP_ARROW);
    }
//--------------------------------------------------
    if (x > 900)
    {
      Keyboard.press(KEY_RIGHT_ARROW);
    }
    else
    {
      Keyboard.release(KEY_RIGHT_ARROW);
    }
//--------------------------------------------------
    if (x < 200)
    {
      Keyboard.press(KEY_LEFT_ARROW);
    }
    else
    {
      Keyboard.release(KEY_LEFT_ARROW);
    }
//--------------------------------------------------
    if (digitalRead(Triangulo) == LOW)
    {
      Keyboard.press('a');
    }
    else
    {
      Keyboard.release('a');
    }
//--------------------------------------------------    
    if (digitalRead(Cuadrado) == LOW)
    {
      Keyboard.press('z');
    }
    else
    {
      Keyboard.release('z');
    }
//--------------------------------------------------    
    if (digitalRead(Circulo) == LOW)
    {
      Keyboard.press('s');
    }
    else
    {
      Keyboard.release('s');
    }
//--------------------------------------------------
    if (digitalRead(X) == LOW)
    {
      Keyboard.press('x');
    }
    else
    {
      Keyboard.release('x');
    }
//--------------------------------------------------
     if (digitalRead(Select) == LOW)
    {
      Keyboard.press(KEY_RIGHT_SHIFT);
    }
    else
    {
      Keyboard.release(KEY_RIGHT_SHIFT);
    }
//--------------------------------------------------
     if (digitalRead(Pausa) == LOW)
    {
     Keyboard.press(KEY_ENTER);
    }
    else
    {
      Keyboard.release(KEY_ENTER);
    }
//--------------------------------------------------
  if(digitalRead(Select) == LOW && digitalRead(Pausa) == LOW){
      Keyboard.press(KEY_ESC);
    }
    else
    {
      Keyboard.release(KEY_ESC);
    }
//--------------------------------------------------
     if (digitalRead(R1) == LOW)
    {
      Keyboard.press('r');
    }
    else
    {
      Keyboard.release('r');
    }
//--------------------------------------------------
     if (digitalRead(R2) == LOW)
    {
      Keyboard.press('t');
    }
    else
    {
      Keyboard.release('t');
    }
//--------------------------------------------------
     if (digitalRead(L1) == LOW)
    {
      Keyboard.press('l');
    }
    else
    {
      Keyboard.release('l');
    }
//--------------------------------------------------
     if (digitalRead(L2) == LOW)
    {
      Keyboard.press('y');
    }
    else
    {
      Keyboard.release('y');
    }            
    tiempo1 = millis();
  }
}
