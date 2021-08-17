int Solution::strStr(const string A, const string B) {
    
     if(A.empty() || B.empty())
    return -1;
    int n = A.size();
    
    for(int i = 0; i < n ; i++){
        
        int j = 0;
        
        if(A[i] == B[0]){
            int count = 0;
            while(j < B.size() && j + i < A.size()){
                
                if(A[j + i] == B[j])
                count++;
                
                j++;
            }
            
            if(count == B.size())
            return i;
        }
        
    }
    return -1;
}
