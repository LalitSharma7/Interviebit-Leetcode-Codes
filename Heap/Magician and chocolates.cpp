#define mod 1000000007

int Solution::nchoc(int x, vector<int> &arr) {
    priority_queue<int>pq;
    for(int it:arr )
    {
        pq.push(it);
    }
    
    long long int ans =0;
    
    while(x--)
    {
        int val = pq.top();
        pq.pop();
        ans = (ans+val)%mod;
        pq.push(val/2);
    }
    
    return ans;
}
