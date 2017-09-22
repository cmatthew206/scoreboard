#include <Adafruit_GFX.h>   // Core graphics library
#include <RGBmatrixPanel.h> // Hardware-specific library

#define OE   9
#define LAT 10
#define CLK 11
#define A   A0
#define B   A1
#define C   A2
#define D   A3
RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false, 64);
int r = 1;
int c = 0;
int rb = r+12;
int black = matrix.Color333(0,0,0);
int red = matrix.Color444(5, 0, 0);
int blue = matrix.Color333(0, 0, 1);
int white = matrix.Color444(7, 7, 7);
int green = matrix.Color333(0,1,0);
int gold = matrix.Color333(2, 1, 0);
int grey = matrix.Color444(1, 1, 1);
int i;
int dir=0;
const int left = 13;
const int right = 12;
int leftState, rightState;

// test variables
unsigned long currentMillis;
long previousMillis;
long interval = 100;
  
void setup() {
  Serial.begin(9600);
  matrix.begin();
  pinMode(left, INPUT);
  pinMode(right, INPUT);
  setCurs(4);
  drawSix();
  // colon 
  matrix.drawPixel(c+9, r+3, red);
  matrix.drawPixel(c+9, r+4, red);
  matrix.drawPixel(c+9, r+8, red);
  matrix.drawPixel(c+9, r+9, red);
  setCurs(5);
  drawFour();
  setCurs(6);
  drawThree();
  matrix.drawLine(0,15,63,15,red);
  matrix.drawLine(16,15,16,31, red);
  matrix.drawLine(47,15,47,31,red);
  matrix.setCursor(0,4);
  matrix.setTextSize(1);
  matrix.setTextColor(green);
  matrix.drawLine(23,0,23,14,red);
  matrix.drawLine(40,0,40,14,red);
  
  drawTeams();
}
void loop()
{
//{
//  leftState = digitalRead(left);
//  rightState = digitalRead(right);
//  if(rightState == HIGH)
//  {
//    dir++;
//    if(dir > 3)
//    {
//      dir = 0;
//    }
//  }
//  if(leftState == HIGH)
//  {
//    dir--;
//    if(dir < 0)
//    {
//      dir = 3;
//    }
//  }
//  switch(dir)
//  {
//    case 0:
//      c++;
//      break;
//    case 1:
//      r--;
//      break;
//    case 2:
//      c--;
//      break;
//    case 3:
//      r++;
//      break;
//  }
//  if(c>63)
//  {
//    c = 0;
//  }
//  if(c<0)
//  {
//    c = 63;
//  }
//  matrix.drawPixel(c, r, red);
//  delay(100);
//  Serial.println(dir);
}
