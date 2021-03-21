void spotr()
{
  dir->i = (dir->i + 1) % 4;
  digitalWrite(mlf, LOW);
  digitalWrite(mlb, HIGH);
  digitalWrite(mrf, HIGH);
  digitalWrite(mrb, LOW);
  
}
