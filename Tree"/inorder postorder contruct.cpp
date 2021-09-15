
TreeNode*buildtree(vector<int>&in,vector<int>&po,int is, int ie, int ps, int pe)
{
    if(is>ie||ps>pe)
      return NULL;
      
    int rootdat = po[pe];
    int ind = -1;
    
    for(int i=is;i<=ie;i++)
    {
        if(rootdat==in[i])
        {
            ind =i;
            break;
        }
    }
    
    int len = ind-is;
    TreeNode*root = new TreeNode(rootdat);
    root->left = buildtree(in,po,is,ind-1,ps,ps+len-1);
    root->right =buildtree(in,po,ind+1,ie,ps+len,pe-1);
    return root;
}

TreeNode* Solution::buildTree(vector<int> &in, vector<int> &po) {
    return buildtree(in,po,0,in.size()-1,0,po.size()-1);
}
