void dist()
{
  l = a.ping();
  
  r = b.ping();
  
  f = c.ping();
  
  la += l;
  ra += r;
  fa += f;
  if (ctr == 20)
  {

    la /= ctr;
    ra /= ctr;
    fa /= ctr;
    if(fa>800 || fa<=0)
    {
      fa = 800;
      }
    if(la>800|| la<=0)
    {
      la = 800;
      }
  if(ra>800|| ra<=0)
    {
      ra = 800;
      }
        

//    la = 347*la/2;
//    ra = 347*ra/2;
//    fa = 347*fa/2;
    
    ctr = 0;
    Serial.print(la);
    Serial.print("\t");
    Serial.print(fa);
    Serial.print("\t");
    Serial.print(ra);
    Serial.print("\t");
    Serial.println();
  }
  else
    ctr++;

}
