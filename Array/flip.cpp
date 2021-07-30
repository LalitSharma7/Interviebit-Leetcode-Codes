vector<int> Solution::flip(string str) {
    
    vector<int>ans;
    
    int count =0;
    int n = str.length();
  
  // if all 1s are present
    for(int i=0;i<n;i++)
    {
        if(str[i]=='1')
           count++;
        else
           break;
    }
    
    if(count==n)
       return ans;
       
    int diff =0;
    int maxdiff =0;
    int left =1;
    int right =1;
    int ansl;
    int ansr;
    
    for(int i=0;i<n;i++)
    {
        if(str[i]=='0')
        {
            diff++;
        }
        
        else
        {
            diff--;
        }
        
        if(diff>maxdiff)
        {
            maxdiff = diff;
            ansl = left;
            ansr = right;
        }
        
        if(diff<0)
        {
            diff =0;
            left = i+1+1;
        }
        
        right++;
    }
    
    ans.push_back(ansl);
    ans.push_back(ansr);
    
    return ans;
}
