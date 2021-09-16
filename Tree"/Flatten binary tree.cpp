TreeNode*helper(TreeNode*root)
{
    if(!root)
      return NULL;
    
    if(!root->left&&!root->right)
      return root;
     
    TreeNode*lefttail = helper(root->left);
    TreeNode*righttail = helper(root->right);
    if(lefttail&&righttail)
    {
        lefttail->right = root->right;
        root->right = root->left;
        root->left = NULL;
    }
    else if(lefttail)
    {
        root->right = root->left;
        root->left = NULL;
        return lefttail;
    }
    return righttail;
}

TreeNode* Solution::flatten(TreeNode* A) {
   helper(A);
   return A;
}
