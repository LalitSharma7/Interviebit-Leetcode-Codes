void Solution::connect(TreeLinkNode* root) {
    
    queue<TreeLinkNode*>q;
    q.push(root);
    
    while(!q.empty())
    {
        int n = q.size();
        
        while(n--)
        {
            TreeLinkNode*x = q.front();
            q.pop();
            
            if(x->left)
               q.push(x->left);
            if(x->right)
               q.push(x->right);
            TreeLinkNode*y = NULL;
            
            if(n!=0)
              y = q.front();
            
            x->next = y;
        }
    }
    
}
