class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        
        vector<int>ans;
        int m = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                mp[nums[i][j]]++;
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==m)
            {
                ans.push_back(it->first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};
