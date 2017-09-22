void printTime(double num)
{
  double frac, int1, int2, int3, temp;

  // Clear Screen
  matrix.fillScreen(0);
  col = white;
  drawTeams();
  drawScore();
  drawTemp();
  col = red;
  
  // Minutes digit                    ex: num = 345
  temp = num/60; //                   temp=5.75
  frac = modf(temp, &int1); //     frac=.75, intpart=5
  
  // Tens digit
  temp = (num - 60*int1)/10; //    temp= 4.5
  frac = modf(temp, &int2); //     frac=.5, intpart=4
  
  // Seconds digit
  temp = frac*10; //                  temp=5
  int3 = temp + 0.5; // int conversion inside drawDigit sees a floating 5.00 as 4.993882288134081 or whatever, for some reason. Add arbitrary 0.5 to ensure it's above truncation point

  setCurs(4);
  drawDigit(int1);
  Serial.print("Time: ");
  Serial.print(int1);
  Serial.print(":");
  // colon 
  matrix.drawPixel(c+9, r+3, col);
  matrix.drawPixel(c+9, r+4, col);
  matrix.drawPixel(c+9, r+8, col);
  matrix.drawPixel(c+9, r+9, col);
  setCurs(5);
  drawDigit(int2);
  Serial.print(int2);
  setCurs(6);
  drawDigit(int3);
  Serial.println(int3);
  
  matrix.swapBuffers(false);
}
