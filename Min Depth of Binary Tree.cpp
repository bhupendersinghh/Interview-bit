int depth(TreeNode* A)
{
    if(!A)
        return 0;
    else if(!A->left && !A->right)
        return 1;
    else if(!A->left)
        return 1 + depth(A->right);
    else if(!A->right)
        return 1 + depth(A->left);
    return 1 + min(depth(A->left), depth(A->right));
}

int Solution::minDepth(TreeNode* A) {
    return depth(A);
}