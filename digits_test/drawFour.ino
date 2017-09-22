void drawFour()
{
  int cp = c+7;
  int rp = r+6; // middle row
  // top right down
  matrix.drawLine(cp,r,cp,rb,red);
  // middle right to middle left
  matrix.drawLine(c,rp,cp,rp,red);
  // top left down
  matrix.drawLine(c,r,c,rp,red);
}
