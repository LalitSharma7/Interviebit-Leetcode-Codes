vector<int> Solution::maxone(vector<int> &A, int B) {
    int l=0;
    int r=0;
    int ansle;
    int ansri;
    vector<int>ans;
    
    int count =0;
    
    while(r<A.size())
    {
        if(A[r]==1)
        {
            if(count<(r-l+1)&&r<A.size())
            {
                ansle = l;
                ansri = r;
                count = (r-l+1);
            }
            
            r++;
        }
        
        else if(A[r]==0 && B>0)
        {
            B--;
            if(count < (r-l+1) && r < A.size())
            {
                ansle = l;
                ansri = r;
                count = r-l+1;
            }
            r++;
        }
        
        else 
        {
            while(l < r && B == 0)
            {
                if(A[l] == 1)
                    l++;
                else
                {
                    B++;
                    l++;
                    break;
                }
            }
            if(l == r && B == 0)
            {
                l++;
                r++;
            }
            
        }
    }
    
    if(count > 0)
    {
        for(int i = ansle;i <= ansri; i++)
        {
            ans.push_back(i);
        }
    }
    return ans;

    
}
