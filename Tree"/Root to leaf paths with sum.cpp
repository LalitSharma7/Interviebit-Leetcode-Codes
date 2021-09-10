void helper(TreeNode*A, int B, vector<vector<int>>&ans,vector<int>temp)
{
    if(!A)
      return;
    
    if(!A->left&&!A->right)
    {
        temp.push_back(A->val);
        
        if(A->val==B)
        {
            ans.push_back(temp);
        }
        
        return;
    }
    
    temp.push_back(A->val);
    
    helper(A->left,B-A->val,ans,temp);
    helper(A->right,B-A->val,ans,temp);
}
 
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    
    vector<vector<int>>ans;
    vector<int>temp;
    helper(A,B,ans,temp);
    return ans;
}
