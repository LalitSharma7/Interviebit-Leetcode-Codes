class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        
        if(root==NULL)
            return {};
        
        vector<double>avg;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            double sum = 0;
            int count = size;
            
            while(count>0)
            {
                TreeNode*node = q.front();
                q.pop();
                sum = sum + node->val;
                if(node->left)
                {
                    q.push(node->left);
                }
                
                if(node->right)
                {
                    q.push(node->right);
                }
                count--;
            }
            
            avg.push_back(sum/size);
        }
        
        return avg;
        
        //add from each level of tree and find the average by dividing the size
    }
};
