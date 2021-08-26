vector<int> Solution::primesum(int n) {
    vector<int>v;
    bool a[n+1];
   a[0] = a[1] = false;
   for (int i=2; i<=n; i++)
      a[i] = true;

   for (int p=2; p*p<=n; p++)
   {
        for (int i=p*p; i<=n; i += p)
            a[i] = false;
 
   }
   for (int i=0; i<n; i++)
   {
    if (a[i] && a[n-i])
    {
        v.push_back(i);
        v.push_back(n-i);
        break;
    }
  }
    
    return v;
    
    
}
