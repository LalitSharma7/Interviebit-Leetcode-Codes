int Solution::solve(string A) {
    
    int cnt=0;
    for(int j=0;j<A.length();j++ ){
        
   if(A[j]=='a'||A[j]=='e'||A[j]=='i'||A[j]=='o'||A[j]=='u'||A[j]=='A'||A[j]=='E'||A[j]=='I'||A[j]=='O'||A[j]=='U')
   {
     cnt=cnt+A.length()-j;
    }
  }
   return cnt%10003;
}
