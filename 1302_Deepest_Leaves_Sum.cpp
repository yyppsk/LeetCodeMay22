class Solution {
public:
    int height (TreeNode* root)
    {
        if (!root)
            return 0;
        return max(height(root->left), height(root->right)) + 1;
    }
};