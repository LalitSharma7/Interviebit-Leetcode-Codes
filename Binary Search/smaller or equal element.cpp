int Solution::solve(vector<int> &A, int B) {
    
    int n=A.size();
    int high=n-1, low=0,count=0;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(A[mid]<=B){
             count=mid+1;
             low=mid+1;
           }
        if(A[mid]>B) 
            high=mid-1;

       }
     return count;
}
