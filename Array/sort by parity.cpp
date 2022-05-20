class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> v1;
        vector<int> v2;
    
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
                v1.push_back(nums[i]);
            else
                v2.push_back(nums[i]);
        }
        
        int k = v2.size();
        
        for(int i=0;i<k;i++)
        {
            v1.push_back(v2[i]);
        }
        
        return v1;
        
    }
};
