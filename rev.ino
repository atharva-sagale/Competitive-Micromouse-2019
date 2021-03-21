void rev()
{

  digitalWrite(mlb, HIGH);
  digitalWrite(mlf, LOW);
  digitalWrite(mrb, HIGH);
  digitalWrite(mrf, LOW);
  

  switch (dir->d[dir->i])
  {
    case'n':
      dir->y--;
      break;
    case 'e':
      dir->x--;
      break;
    case 's':
      dir->y++;
      break;
    case 'w':
      dir->x++;
  }
}
