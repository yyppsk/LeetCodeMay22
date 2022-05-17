class Solution
{
public:
    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
    {
        TreeNode *res;
        return inorder(original, cloned, target, res);
    }

    TreeNode *inorder(TreeNode *original, TreeNode *cloned, TreeNode *target, TreeNode *&res)
    {

        if (original != NULL)
        {
            inorder(original->left, cloned->left, target, res);

            if (original == target)
            {
                res = cloned;
            }

            inorder(original->right, cloned->right, target, res);
        }
        return res;
    }
};