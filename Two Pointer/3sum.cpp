int Solution::threeSumClosest(vector<int> &A, int B) {
    
    sort(A.begin(), A.end());
    long bestSum = A[0]+A[1]+A[2];
    
    for(int left = 0; left < A.size()-2; left ++) {
        int mid = left + 1;
        int right = A.size() - 1;
        while(mid < right)     {      
            long sum = long(A[left] + A[mid] + A[right]);
            if(abs(sum - B) < abs(bestSum - B))
                bestSum = sum;
            else if(sum < B)   
                   mid++;
            else                    
                  right--;
        }
    }
    return bestSum;
    
}
