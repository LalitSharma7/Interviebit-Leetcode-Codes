class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
        unordered_map<int,int>mp;
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==2)
            {
                v.push_back(it->first);
            }
        }
        
        return v;
    }
};
