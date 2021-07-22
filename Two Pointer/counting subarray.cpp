int Solution::solve(vector<int> &A, int B) {
    int n = A.size(), res = 0;
    
    int i = 0, j, sum = 0;
    for(j = 0; j < n; j++){
        sum += A[j];
        
        while(sum >= B) 
           sum -= A[i++];
        res += (j - i + 1);
    }
    return res;
}
