int Solution::search(const vector<int> &A, int B) {

       int n = A.size();
        int left = 0;
        int right = n-1;
        int mid;
        
        //Iterative binary search
        while(left<=right)
        {
            mid = (left+right)/2;
            //cout<<nums[mid]<<"\n";
            if(A[mid]==B)
                return mid;
            else if(A[mid]>=A[left])
            {
                if(B<=A[mid] && B>=A[left])
                    right = mid-1;
                else
                    left = mid+1;
            }
            else
            {
                if(B>=A[mid] && B<=A[right])
                    left = mid+1;
                else
                    right = mid-1;
            }
        }
        return -1;
}
