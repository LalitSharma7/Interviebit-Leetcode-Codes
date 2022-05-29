class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        int sum =0;
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it = mp.begin();it!=mp.end();it++)
        {
            if(it->second == 1)
            {
                sum = sum+ it->first;
            }
        }
        
        return sum;
    }
};
