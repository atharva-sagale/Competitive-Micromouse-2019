void left()
{
  


  switch (dir->d[dir->i])
  {
    case'n':
      dir->x--;
      break;
    case 'e':
      dir->y++;
      break;
    case 's':
      dir->x++;
      break;
    case 'w':
      dir->y--;
  }
}
