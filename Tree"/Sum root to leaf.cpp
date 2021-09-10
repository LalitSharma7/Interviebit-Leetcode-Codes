void helper(TreeNode*A,int sum, int&ans)
 {
     if(!A)
       return;
     
     sum = (sum*10)%1003;
     sum = (sum+A->val)%1002;
     
     if(A->left==NULL&&A->right==NULL)
     {
         ans = (ans+sum)%1003;
         return;
         
         //add to answer only when we reach leaf node else leave it
     }
     helper(A->right,sum,ans);
     helper(A->left,sum,ans);
 }
int Solution::sumNumbers(TreeNode* A) {
    
    int sum =0;
    int ans = 0;
    
    helper(A,sum,ans);
    
    return ans%1003;
}
