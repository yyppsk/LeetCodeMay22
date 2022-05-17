class Solution {
public:
   
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
       TreeNode*res;
        return inorder(original,cloned,target,res);
    }