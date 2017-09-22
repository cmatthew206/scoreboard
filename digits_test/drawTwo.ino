void drawTwo()
{
  int cp = c+7;
  int rp = r+6; // middle row
  // top left to top right
  matrix.drawLine(c,r,c+6,r,red);
  // top right down
  matrix.drawLine(cp,r+1,cp,rp-1,red);
  // middle right to middle left
  matrix.drawLine(c+1,rp,c+6,rp,red);
  // middle left down
  matrix.drawLine(c,rp+1,c,rb-1,red);
  // bottom left to bottom right
  matrix.drawLine(c+1,rb,c+6,rb,red);
}
