void drawNine()
{
  int cp = c+7;
  int rp = r+6; // middle row
  // top right down
  matrix.drawLine(cp,r+1,cp,rb,red);
  // top left down to middle
  matrix.drawLine(c,r+1,c,rp-1,red);
  // middle line
  matrix.drawLine(c+1,rp,cp-1,rp,red);
  // top line
  matrix.drawLine(c+1,r,cp-1,r,red);
}
