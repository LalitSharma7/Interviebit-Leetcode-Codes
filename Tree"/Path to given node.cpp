bool traverse(TreeNode* A, int B, vector<int> &soln){
  if(A->val == B){
    soln.push_back(A->val);
    return true;
  }
  if((A->left and traverse(A->left, B, soln)) or 
        (A->right and traverse(A->right, B, soln))){
    soln.push_back(A->val);
    return true;
  }
   return false;
}
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> soln;
    traverse(A, B, soln);
    reverse(soln.begin(), soln.end());
    return soln;
}
