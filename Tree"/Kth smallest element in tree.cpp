void sol(TreeNode*A, int B,priority_queue<int> &p)
{
    if(A==NULL)
       return;
    p.push(A->val);   
    if(p.size()>B)
       p.pop();
    
    sol(A->left, B, p);
    sol(A->right, B, p);
}


int Solution::kthsmallest(TreeNode* A, int B) {
    
    priority_queue<int>p;
    sol(A,B,p);
    
    return p.top();
    
  
}
