class Solution {
public:
        void traverse(TreeNode* root,int& sum)
    {
        if(root==NULL)
            return;
        
        if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL)
            sum+=root->left->val;
        traverse(root->left,sum);
        traverse(root->right,sum);
    }

    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        traverse(root,sum);
        
        return sum;
        
    }
};
