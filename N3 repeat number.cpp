int Solution::repeatedNumber(const vector<int> &v) {
    
    int n = v.size();
    int el1 = INT_MAX;
    int el2 = INT_MAX;
    int count1 =0;
    int count2 =0;
    
    for(int i=0;i<n;i++)
    {
        if(el1==v[i])
        {
            count1++;
        }
        
        else if(el2 = v[i])
        {
            count2++;
        }
        
        else if(count1==0)
        {
            count1++;
            el1 = v[i];
            
        }
        else if(count2==0)
        {
            count2++;
            el2 = v[i];
            
        }
        
        else
        {
            count1--;
            count2--;
        }
    }
    
    count1=0;
    count2=0;
    
    for(int i=0;i<n;i++)
    {
        if(el1==v[i])
        {
            count1++;
        }
        
        else if(el2==v[i])
        {
            count2++;
        }
    }
    
    if(count1>n/3)
      return el1;
    
    if(count2>n/3)
      return el2;
    

     return -1;
          
}
