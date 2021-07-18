int Solution::repeatedNumber(const vector<int> &A) {
    
    /*int n = A.size();
    unordered_map<int,int>mp;
    
    for(int i=0;i<n;i++)
    {
        mp[A[i]]++;
    }
    
    for(auto i:mp)
    {
        if(i.second>1)
           return i.first;
    }
    
    return -1;
    */
    
    vector<int> v(A.size(), 0);
    for(int x:A)    {
        v[x]++;
        if(v[x]==2) return x;
    }
}
