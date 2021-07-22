int Solution::solve(vector<int> &A, int B) {
    
    int s= 0;
    int maxc = 0;
    int zero = 0;
    
    int n = A.size();
    
    for(int e=0; e<n; e++)
    {
        if(A[e]==0)
        {
            zero++;
        }
        
        while(zero>B)
        {
            if(A[s]==0)
            {
                zero--;
            }
            
            s++;
        }
        
        maxc = max(maxc, e-s+1);
    }
    
    return maxc;
}
