void Solution::arrange(vector<int> &A) {
      vector<int>B;
      int n = A.size();
      for(int i=0;i<n;i++)
      {
        B.push_back(A[i]);
      }
     for(int i=0;i<n;i++)
     {
       A[i]=B[A[i]];
     }
}
