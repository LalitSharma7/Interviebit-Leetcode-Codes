int min3(int a, int b, int c) {
    return min(a, min(b, c));
}

int max3(int a, int b, int c) {
    return max(a, max(b, c));
}


int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    
    int i=0, j=0, k=0;
    
    int ans = INT_MAX;
    while (i<A.size() && j<B.size() && k<C.size()) {
        
        if (A[i]==B[j] && B[j]==C[k]) return 0;
        
        ans = min(ans, max3(abs(A[i]-B[j]), abs(C[k]-B[j]), abs(A[i]-C[k])));
        
        if ( min3(A[i], B[j], C[k])==A[i] ) {
            i++;
        }
        else if ( min3(A[i], B[j], C[k])==B[j] ) {
            j++;
        }
        else if ( min3(A[i], B[j], C[k])==C[k] ) {
            k++;
        }
    }
    
    return ans; 
}
