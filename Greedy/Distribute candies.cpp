int Solution::candy(vector<int> &A) {
    int n=A.size();
    if(n<=1)
      return n;
    vector<int>temp(n,1);
    //left side
   for(int i=1;i<n;i++)
   {
     if(A[i-1]<A[i])
     {
      temp[i]=temp[i-1]+1;
     }
   }
   //right side

  for(int i=n-1;i>0;i--)
  {
   if(A[i-1]>A[i])
   {
     temp[i-1]=max(temp[i]+1,temp[i-1]);
   }
  }
  int ans=0;
  for(int i=0;i<n;i++)
  {
    ans+=temp[i];
  }
  return ans;
}
