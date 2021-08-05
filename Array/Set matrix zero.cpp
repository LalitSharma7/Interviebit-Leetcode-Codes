void Solution::setZeroes(vector<vector<int> > &v) {
   int n = v.size();
   int m = v[0].size();
   vector<int>row(n,1);
   vector<int>col(m,1);
   
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(v[i][j]==0)
           {
               row[i]=0;
               col[j] =0;
           }
       }
   }
   
   for(int i=0;i<n;i++)
   {
       if(row[i]==0)
       {
           for(int j=0;j<m;j++)
           {
               v[i][j] =0;
           }
       }
   }
   
   for(int j=0;j<m;j++)
   {
       if(col[j]==0)
       {
           for(int i=0;i<n;i++)
           {
               v[i][j] =0;
           }
       }
   }
}
