void spotl()
{
  dir->i = (dir->i + 1) % 4;
  digitalWrite(mlf, HIGH);
  digitalWrite(mlb, LOW);
  digitalWrite(mrf, LOW);
  digitalWrite(mrb, HIGH);
  
}
