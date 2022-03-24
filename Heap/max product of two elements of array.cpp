class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        
        priority_queue<int>mh;
        
        for(int i=0;i<n;i++)
        {
            mh.push(nums[i]);
        }
        
        int a = mh.top();
        mh.pop();
        
        int b = mh.top();
        mh.pop();
        
        int c = (a-1)*(b-1);
        
        return c;
    }
};
