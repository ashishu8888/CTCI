bool isRotation(string s1,strings1)
{
  int l1 = s1.length();
  int l2 = s2.length();
  
  if(l1 == l2 and l>0)
  {
    string s1s1 = s1+s1;
    return isSubstring(s1s1,s2);
  }
  return false;
}
