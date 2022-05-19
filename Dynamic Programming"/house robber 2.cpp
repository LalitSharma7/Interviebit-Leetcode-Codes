class Solution {
public:
    int robs(vector<int>& nums)
    {
        int n = nums.size();
        int dp[n];
        
        if(n==1)
            return nums[0];
        
        if(n==2)
            return max(nums[0],nums[1]);
        
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);
        
        for(int i=2;i<n;i++)
        {
            dp[i] = max(nums[i]+dp[i-2],dp[i-1]);
        }
        
        return dp[n-1];
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return nums[0];
        
        vector<int>lot1(nums.begin()+1,nums.end());
        vector<int>lot2(nums.begin(),nums.end()-1);
        
        return max(robs(lot1),robs(lot2));
    }
};

// just remove first element and solve as house robber 1 similarly remove last element and solve as house robber 1
