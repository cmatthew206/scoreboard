void drawSix()
{
  int cp = c+7;
  int rp = r+6; // middle row
  // top left down
  matrix.drawLine(c,r+1,c,rb-1,red);
  // middle right to middle left
  matrix.drawLine(c,rp,cp-1,rp,red);
  // middle right down
  matrix.drawLine(cp,rp+1,cp,rb-1,red);
  // bottom left to bottom right
  matrix.drawLine(c+1,rb,cp-1,rb,red);
  // top left to top right
  matrix.drawLine(c+1,r,cp-1,r,red);
  matrix.drawPixel(cp,r+1, red);
}
