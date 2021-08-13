int Solution::searchInsert(vector<int> &A, int B) {
    
    int n = A.size();
     int start = 0;
    int end = n - 1;
 
    // Traverse the search space
    while (start <= end) {
        int mid = (start + end) / 2;
 
        // If K is found
        if (A[mid] == B)
            return mid;
 
        else if (A[mid] < B)
            start = mid + 1;
 
        else
            end = mid - 1;
    }
 
    // Return insert position
    return end + 1;
           
}
