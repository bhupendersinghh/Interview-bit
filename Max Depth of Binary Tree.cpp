int height(TreeNode* root) {
    if(!root)
        return 0;
    else {
        int lh = height(root->left);
        int rh = height(root->right);
        return (lh >= rh ? lh + 1 : rh + 1);
    }
}
int Solution::maxDepth(TreeNode* A) {
    return height(A);
}
