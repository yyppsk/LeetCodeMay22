class Solution {
public:
    int height (TreeNode* root)
    {
        if (!root)
            return 0;
        return max(height(root->left), height(root->right)) + 1;
    }
    int sum = 0;
    int sum_at_k(TreeNode* root, int k)
};