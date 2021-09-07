int Solution::hasPathSum(TreeNode* root, int sum) {
    if(!root)
      return 0;
      
    if(!root->left&&!root->right)
    {
        if(root->val==sum)
           return 1;
        return 0;
    }
    
    bool l = hasPathSum(root->left, sum-root->val); 
    bool r = hasPathSum(root->right, sum-root->val);
    
    return l||r;
}
