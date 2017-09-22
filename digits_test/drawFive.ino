void drawFive()
{
  int cp = c+7;
  int rp = r+6; // middle row
  // top left to top right
  matrix.drawLine(c,r,cp,r,red);
  // top left down
  matrix.drawLine(c,r,c,rp,red);
  // middle right to middle left
  matrix.drawLine(c,rp,cp-1,rp,red);
  // middle right down
  matrix.drawLine(cp,rp+1,cp,rb-1,red);
  // bottom left to bottom right
  matrix.drawLine(c,rb,cp-1,rb,red);
}
