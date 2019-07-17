int Solution::hasPathSum(TreeNode* A, int B) {
    TreeNode* root = A;
    if(!root)
        return 0;
    if(!root->left && !root->right) {
        return B == root->val;
    }
    int remSum = B - root->val;
    return hasPathSum(root->left, remSum) || hasPathSum(root->right, remSum);
}
