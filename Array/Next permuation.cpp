vector<int> Solution::nextPermutation(vector<int> &v) {
    
    int index = -1;
    int n = v.size();
    for(int i=n-2;i>0;i--)
    {
          if(v[i]<v[i+1])
           { 
               index =i;
               break;
           }
    }
    int x, y;
    if(index ==-1)
    {
        x=0;
        y=n-1;
        while(x<y)
        {
            swap(v[x],v[y]);
            x++;
            y--;
        }
        return v;
    }
    
    int mindiff = INT_MAX;
    int mindiffi = -1;
    
    for(int i=index+1;i<n;i++)
    {
        if(v[i]>v[index]&& v[i]-v[index]<mindiff)
        {
            mindiff = v[i]-v[index];
            mindiffi = i;
        }
    }
     swap(v[index],v[mindiffi]);
     x=index+1;
     y=n-1;
     while(x<y)
      {
          swap(v[x],v[y]);
          x++;
          y--;
          
       }
      return v;
}
