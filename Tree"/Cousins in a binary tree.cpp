vector<int> Solution::solve(TreeNode* A, int B) {
    if(!A)return {};

    vector<int>res;
    queue<TreeNode*>q;
    q.push(A);
    bool f=false;
    while(!q.empty()){
    int n=q.size();
    if(f==true){
        for(int i=0;i<n;i++){
            TreeNode* temp=q.front();
            q.pop();
            res.push_back(temp->val);
        }
    }
    else{
        for(int i=0;i<n;i++){
            TreeNode* temp=q.front();
            q.pop();
            if(temp->right and temp->right->val==B)
            {
                f=true;
                continue;
            }
            if(temp->left and temp->left->val==B)
            {
                f=true;
                continue;
                
            }
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
     }
  }
  return res;
    
}
