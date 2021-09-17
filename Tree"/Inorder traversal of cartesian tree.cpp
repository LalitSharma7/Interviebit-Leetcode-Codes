TreeNode*buildtree(vector<int>&v, int s, int e)
{
    if(s>e)
      return NULL;
    
    int ind =-1;
    int max = INT_MIN;
    for(int i=s;i<=e;i++)
    {
        if(max<v[i])
        {
            max = v[i];
            ind = i;
        }
    }
    
    TreeNode*root = new TreeNode(v[ind]);
    root->left = buildtree(v,s,ind-1);
    root->right = buildtree(v,ind+1,e);
    return root;
}
TreeNode* Solution::buildTree(vector<int> &v) {
    return buildtree(v,0,v.size()-1);
}
