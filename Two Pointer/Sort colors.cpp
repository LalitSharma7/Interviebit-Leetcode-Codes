void Solution::sortColors(vector<int> &A) {
    int lo = 0;
    int hi = A.size()-1;
    int mid = 0;
 
    // Iterate till all the elements
    // are sorted
    while (mid <= hi) {
        switch (A[mid]) {
 
        // If the element is 0
        case 0:
            swap(A[lo++], A[mid++]);
            break;
 
        // If the element is 1 .
        case 1:
            mid++;
            break;
 
        // If the element is 2
        case 2:
            swap(A[mid], A[hi--]);
            break;
        }
    }
}
