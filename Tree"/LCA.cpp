int LCA(TreeNode *root, int v1, int v2) {
  if (root == NULL)
    return -1;
  if (root->val == v1 or root->val == v2)
    return root->val;
  int left = LCA(root->left, v1, v2);
  int right = LCA(root->right, v1, v2);

  if (left != -1 and right != -1) {
    return root->val;
  }
  return (left != -1) ? left : right;
}

bool search(TreeNode *root, int item) {
  if (root == NULL)
    return false;
  if (root->val == item)
    return true;
  return (search(root->left, item) || search(root->right, item));
}

int Solution::lca(TreeNode* A, int B, int C) {
   
  return (search(A, B) && search(A, C)) ? LCA(A, B, C) : -1;
      
    
}
