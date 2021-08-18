string Solution::countAndSay(int A) {
    
    if(A==1)
      return "1";
    if(A==2)
      return "11";
   
    string s="11";

    for(int i=3;i<=A;i++)
    {
      s+='&';
      int n=s.length();
      int count=1;
      string temp="";
      for(int j=1;j<n;j++)
      {
        if(s[j]!=s[j-1])
        {
            temp+=count+'0';
            temp+=s[j-1];
            count=1;
        }
        else
            count++;
      }
    s=temp;
   }
  return s;
    
}
