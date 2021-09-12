vector<int> Solution::postorderTraversal(TreeNode* root) {
    
    vector<int>ans;
    stack<TreeNode*>st;
    st.push(root);
    
    while(!st.empty())
    {
        TreeNode*req = st.top();
        st.pop();
        ans.push_back(req->val);
        if(req->left)
        {
            st.push(req->left);
        }
        if(req->right)
        {
            st.push(req->right);
        }
    }
    
    reverse(ans.begin(),ans.end());
    return ans;
}
