string Solution::solve(string A, int B) {
    
    int n = A.length();
    string ans = "";
    
    int i=0;
    int j=0;
    
    if(n==0)
       return "";
    while(i<n)
    {
        string temp ="";
        while(j<n && A[i]==A[j])
        {
            temp = temp+A[j];
            j++;
        }
        
        if(temp.size()!=B)
        {
            ans+=temp;
        }
        
        i=j;
    }
    
    return ans;
}
