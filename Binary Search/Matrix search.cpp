int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    
   /* int n = A.size();
    
    int i=0;
    int j=n-1;
    
    while(i<n && j>=0)
    {
        if(A[i][j]==B)
          return 1;
        
        else if(A[i][j]>B)
           j--;
        
        else 
           i++;
    }
    
    return 0;
   */
        int lo = 0;
        if(!A.size()) return false;
        int hi = (A.size() * A[0].size()) - 1;
        
        while(lo <= hi) {
            int mid = (lo + (hi - lo) / 2);
            if(A[mid/A[0].size()][mid % A[0].size()] == B) {
                return true;
            }
            if(A[mid/A[0].size()][mid % A[0].size()] < B) {
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }
        return false;
}
