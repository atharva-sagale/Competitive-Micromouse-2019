void fwd()
{
  digitalWrite(mlf, HIGH);
  digitalWrite(mlb, LOW);
  digitalWrite(mrf, HIGH);
  digitalWrite(mrb, LOW);
  

  switch (dir->d[dir->i])
  {
    case'n':
      dir->y++;
      break;
    case 'e':
      dir->x++;
      break;
    case 's':
      dir->y--;
      break;
    case 'w':
      dir->x--;
  }

}
