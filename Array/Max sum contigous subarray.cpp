int Solution::maxSubArray(const vector<int> &A) {
    
    int n = A.size();
    
    int max_so= INT_MIN;
    
    int max_end = 0;
    
    for(int i=0;i<n;i++)
    {
        max_end = max_end + A[i];
        
        if(max_end>max_so)
        {
            max_so = max_end;
        }
        
        if(max_end<0)
        {
            max_end = 0;
        }
    }
    
    return max_so;
}

