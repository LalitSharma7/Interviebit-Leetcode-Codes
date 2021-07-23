int Solution::solve(vector<int> &A, int B) {
    
    priority_queue<int>pq;
    for(auto i:A)
    {
        pq.push(i);
    }
    
    int ans =0;
    int temp;
    
    while(B--)
    {
        temp = pq.top();
        ans = ans+ temp;
        pq.pop();
        pq.push(temp-1);
    }
    
    return ans;
}
