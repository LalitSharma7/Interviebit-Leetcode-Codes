queue<int> s;

BSTIterator::BSTIterator(TreeNode *root) {
    
    if(root==NULL) return;
    BSTIterator(root->left);
    s.push(root->val);
    BSTIterator(root->right);

}


bool BSTIterator::hasNext() {
    return s.size()>0;

}

int BSTIterator::next() {
    int temp=s.front();
    s.pop();
    return temp;

}
