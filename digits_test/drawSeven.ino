void drawSeven()
{
  int cp = c+7;
  // top left to top right
  matrix.drawLine(c,r,cp,r,red);
  // top right to bottom left
  matrix.drawLine(cp,r,(c+2),rb,red);
}
