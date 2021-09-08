TreeNode* Solution::solve(TreeNode* A) {
    if(A==NULL)return A;
    if(A->left==NULL && A->right==NULL)return A;
    if(A->left!=NULL && A->right!=NULL){
        A->left=solve(A->left);
        A->right=solve(A->right);
        return A;
    } 
    else if(A->left==NULL)
         return solve(A->right);
    else 
         return solve(A->left);
}
