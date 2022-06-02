class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int>even;
        vector<int>odd;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        int j=0;
        int k=0;
        int eve;
        int od;
      
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                eve = even[j];
                ans.push_back(eve);
                j++;
            }
            else
            {
                od = odd[k];
                ans.push_back(od);
                k++;
            } 
        }
        return ans;
    }
};
