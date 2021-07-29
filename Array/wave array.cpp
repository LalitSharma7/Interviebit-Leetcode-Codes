vector<int> Solution::wave(vector<int> &A) {
    
    sort(A.begin(),A.end());

     for(int i = 1;i < A.size();i++){
         swap(A[i-1],A[i]);
           i++;
    
      }
    return A;
}
