vector<int> Solution::slidingMaximum(const vector<int> &arr, int k) {
    deque<int>dq;
    int n = arr.size();
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        if(!dq.empty()&&dq.front()==(i-k))
        {
            dq.pop_front();
        }
        
        while(!dq.empty()&&arr[i]>arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        if((i+1)>=k)
        {
            ans.push_back(arr[dq.front()]);
        }
    }
    
    return ans;
    
    
}
