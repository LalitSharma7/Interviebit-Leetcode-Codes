vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* root) {
    vector<vector<int>>ans;
    if(!root)
       return ans;
    queue<pair<TreeNode*,int>>q;
    q.push({root,0});
    map<int,vector<int>>mp;
    
    while(!q.empty())
    {
        TreeNode*x = q.front().first;
        int vect = q.front().second;
        q.pop();
        if(x->left)
           q.push({x->left,vect-1});
        if(x->right)
           q.push({x->right,vect+1});
        
        mp[vect].push_back(x->val);
    }
    
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        ans.push_back(it->second);
    }
    
    return ans;
}
