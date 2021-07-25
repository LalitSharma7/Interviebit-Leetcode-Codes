int Solution::diffPossible(vector<int> &A, int B) {
    
    int n = A.size()-1;
    
    int i=0;
    int j=1;
    
    while(i<=n&&j<=n)
    {
        if(i==j)
        {
            j++;
        }
        
        int dif = A[j]-A[i];
        
        if(dif==B)
          return 1;
        
        else if(dif<B)
        {
            j++;
        }
        
        else
        {
            i++;
        }
    }
    
    return 0;
}
