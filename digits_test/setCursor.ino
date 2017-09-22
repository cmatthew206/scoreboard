void setCurs(int i)
{
  switch(i)
  {
    case 2:
    c = 13; // start at 13th pixel
    break;
    
    case 3:
    c = 24; // start at 24th pixel
    break;
    
    default:
    c = 0;
    break;
    
    case 4:
    c = 18;
    r = 18;
    rb = r + 12;
    break;
    
    case 5:
    c = 29;
    r = 18;
    rb = r + 12;
    break;
    
    case 6:
    c = 38;
    r = 18;
    rb = r + 12;
    break;
  }
}
