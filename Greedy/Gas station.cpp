int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
        int n = A.size();
        int total_surplus = 0;
        int surplus = 0;
        int S = 0;
        
        for(int i = 0; i < n; ++i){
            total_surplus += A[i] - B[i];
            surplus += A[i] - B[i];
            if(surplus < 0){
                surplus = 0;
                S = i+1;
            }
        }
        return (total_surplus < 0) ? -1 : S;
    
}
