int Solution::largestRectangleArea(vector<int> &A) {
     int n = A.size();
    int maxar = INT_MIN, area;
    //left & right stack store nearest left & right values in the array
    //the index is kept in the l & r vectors
    stack<int> left, right;
    vector<int> l(n), r(n);
    //finding the previous smallest element
    for (int i = 0; i < n; i++) {
        while (!left.empty() && A[left.top()] >= A[i])  left.pop();
        l[i] = (!left.empty()) ? left.top() : -1;
        left.push(i);
    }
    //finding the next smallest element
    for (int i = n-1; i >= 0; i--) {
        while (!right.empty() && A[right.top()] >= A[i])    right.pop();
        r[i] = (!right.empty()) ? right.top() : n;
        right.push(i);
    }
    //calculating the max. area histogram formed
    for (int i = 0; i < n; i++) {
        area = A[i] * (r[i] - l[i] - 1);
        maxar = max(maxar, area);
    }
    return maxar;
    
}
