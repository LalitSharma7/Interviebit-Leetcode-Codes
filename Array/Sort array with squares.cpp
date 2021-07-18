vector<int> Solution::solve(vector<int> &A) {
    
    vector<int>B;
    
    int n = A.size();
    
    int s;
    
    for(int i=0;i<n;i++)
    {
        s = A[i]*A[i];
        B.push_back(s);
    }
    
    sort(B.begin(),B.end());
    
    return B;
}
