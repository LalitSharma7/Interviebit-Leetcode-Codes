int Solution::solve(vector<string> &A) {
    int n= A.size();
    
    sort(A.begin(),A.end());
    
    int i=0;
    int j=n-1;
    if(n<3)
      return 0;
     while(j - i >= 2){
        int mid = (i + j)/2;
        
        float a = stof(A[i]);
        float b = stof(A[mid]);
        float c = stof(A[j]);
        
        float sum = a + b + c;
        
        if(sum > 1 and sum < 2)
            return 1;
            
        else if(sum > 2)
            j--;
            
        else
            i++;
    }
    
    return 0;
}
