int depth(TreeNode* root) {
    if(!root)
        return 0;
    else
        return 1 + max(depth(root->left), depth(root->right));
}

int Solution::isBalanced(TreeNode* A) {
    if(!A)
        return 1;
    int rh = depth(A->right), lh = depth(A->left);
    if(abs(rh - lh) < 2 && isBalanced(A->left) && isBalanced(A->right))
        return 1;
    return 0;
}
