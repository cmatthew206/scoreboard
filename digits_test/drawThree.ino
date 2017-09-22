void drawThree()
{
  int cp = c+7;
  int rp = r+6;
  // top left to top right
  matrix.drawPixel(c, r+1, red);
  matrix.drawLine(c+1,r,cp-1,r,red); 
  // top right down
  matrix.drawLine(cp,r+1,cp,rp-1,red);
  matrix.drawLine(cp,rp+1,cp,rb-1,red);
  // middle right to middle left
  matrix.drawLine(c+1,rp,cp-1,rp,red);
  // bottom left to bottom right
  matrix.drawPixel(c, rb-1, red);
  matrix.drawLine(c+1,rb,cp-1,rb,red);
}
