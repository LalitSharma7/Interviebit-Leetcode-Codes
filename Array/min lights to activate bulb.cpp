int Solution::solve(vector<int> &A, int B) {
    
    int n = A.size();
    
    bool bulbfound = false;
    
    int bulbfoundat = 0;
    
    int count =0;
    
    int i=0;
    
    while(i<n)
    {
        int j = min(i+B-1,n-1);
        
        bulbfound = false;
        
        while(j>=(i-B+1) && j>=0 && j<n)
        {
            if(A[j]==1)
            {
                bulbfound = true;
                bulbfoundat = j;
                count++;
                i = j+B;
                
                break;
            }
            
            j--;
        }
        
        if(!bulbfound)
           return -1;
        
        
    }
    
    return count;
    
}
