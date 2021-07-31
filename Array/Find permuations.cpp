vector<int> Solution::findPerm(const string A, int B) {
    
    int s = 1;
    int l = B;
    
    int n = A.size();
    
    vector<int>v;
    
    for(int i=0;i<=n;i++)
    {
        if(A[i]=='I')
        {
            v.push_back(s);
            s++;
        }
        
        else
        {
            v.push_back(l);
            l--;
        }
    }
    
    return v;
    
    
}
