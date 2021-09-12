void preorder(TreeNode*root,map<int,vector<int>>& mp,int dig)
{
    if(!root)
       return;
    mp[dig].push_back(root->val);
    preorder(root->left,mp,dig+1);
    preorder(root->right,mp,dig);
}
vector<int> Solution::solve(TreeNode* root) {
    
    vector<int>ans;
    map<int,vector<int>> mp;
    preorder(root,mp,0);
    
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        vector<int>req = it->second;
        for(int i=0;i<req.size();i++)
        {
            ans.push_back(req[i]);
        }
    }
    return ans;
}
