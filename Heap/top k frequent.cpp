class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(k==nums.size())
            return nums;
        
        map<int,int> mp;
        for(auto n:nums){
            mp[n] += 1;
        }
        
        priority_queue< pair<int,int> >pq;
        
        for(pair<int, int> p : mp){
            pq.push( make_pair(p.second,p.first) );
        }
        
        vector<int> ans;
        
        while(k--){
            int tmp = pq.top().second;
            pq.pop();
            ans.push_back(tmp);
        }
        
        return ans;
    }
};
