void inorder(TreeNode*root,vector<int>& v){
    if(!root) return;
    inorder(root->left,v);
    v.push_back(root->val);
    inorder(root->right,v);
}
int Solution::t2Sum(TreeNode* A, int B) {
    
    vector<int>v;
    if(!A)
      return 0;
    inorder(A,v);

   int i=0;int j=v.size()-1;
    while(i<j){
     int y=v[i]+v[j];
     if(y<B) 
       i++;
     else if(y>B) 
       j--;
    else 
      return 1;
    }
  return 0;

}
