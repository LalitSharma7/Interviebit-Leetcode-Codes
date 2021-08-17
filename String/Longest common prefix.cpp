string Solution::longestCommonPrefix(vector<string> &A) {
     int minSize =INT_MAX; ;

    for(int i =0 ;i <A.size();i++)

    {
       if(minSize>A[i].length())
       minSize=A[i].length();
    }
    int flag =1;
    string res= "";

    for(int i=0;i<minSize;i++)
     {  
        char c = A[0][i];
         flag=1;
         for(int j=1;j<A.size();j++)

        {
         if(c== A[j][i])
             continue;
            
        else
            {
                flag=0;
                break;
            }
        }
        if(flag!=0)
           res+=A[0][i];
        
       }
     return res;
}
