int Solution::solve(vector<int> &A, int B) {
    
        /* Method 1 failed
        
        int n = A.size();
        int sum = 0;
        priority_queue<int>q;
        
        for(int i=0;i<B;i++)
        {
            q.push(A[i);
        }
        
        for(int i=n-1;i<n-1-B;i--)
        {
            q.push(A[i);
        }
        
        while(B>0)
        {
            int top = q.top();
            q.pop();
            sum = sum+top;
            B--;
        }
        
        return sum;
        
        */
        
        int n = A.size();
        int sum = 0;
        int res = 0;
        for(int i = 0 ; i < B ; i++)
            res += A[i];
            
        sum = res;
        for(int i = 0 ; i < B ; i++)
        {
            sum -= A[B-1-i];
            sum += A[n-1-i];
            
            res = max(res, sum);
        }
        return res;
    
}
