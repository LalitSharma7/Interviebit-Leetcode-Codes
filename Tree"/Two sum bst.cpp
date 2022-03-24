class Solution {
public:
    std::map<int, int> m;
    bool findTarget(TreeNode* root, int k) {
        if (!root)
            return false;
        
        if (m.find(k - root->val) != m.end())
            return true;
        
        m[root->val]++;
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
};
