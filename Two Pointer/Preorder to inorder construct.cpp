TreeNode* create(vector<int> &pre, vector<int> &ino, int start,int end,int &i){
// i == index of preorder

//Base Case
      if(start>end) 
         return NULL;
//Rec Case
     TreeNode* cur= new TreeNode(pre[i]);//creating a new node
     int index=-1;

     for(int j=start;j<=end;j++){
       if(ino[j]==pre[i]){
          index=j;
        break;
      }
    }
   i++;
   cur->left= create(pre,ino,start,index-1,i);
   cur->right= create(pre,ino,index+1,end,i);
   return cur;
}




TreeNode* Solution::buildTree(vector<int> &pre, vector<int> &ino) {
    int n=pre.size();
    int i=0;
    TreeNode* root= create(pre,ino,0,n-1,i);
    return root;
    
}
