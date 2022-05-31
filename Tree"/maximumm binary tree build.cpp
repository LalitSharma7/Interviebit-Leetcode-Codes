class Solution {
  
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int s =0;
        int e = nums.size()-1;
        return constructree(nums, s, e);
    }
    
int finmax(vector<int>&nums,int s, int e)
    
    {
        int maxi = nums[s];
        int idx = s;
        
        for(int i=s;i<=e;i++)
        {
            if(nums[i]>maxi)
            {
                maxi = nums[i];
                idx = i;  
            }
        }
        return idx;   
    
    }
    
TreeNode*constructree(vector<int>&nums,int s, int e)
    {
       if(s<=e){
        
        int id = finmax(nums,s,e);
        TreeNode*root = new TreeNode(nums[id]);
        root->left = constructree(nums,s,id-1);
        root->right = constructree(nums,id+1,e);
        return root;
       }
        
       return NULL;  
    }   
     
};
