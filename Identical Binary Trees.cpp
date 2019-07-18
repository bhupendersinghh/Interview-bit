int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    if(!A && !B) {
        return 1;
    }
    if((A && !B) || (!A && B) || (A->val != B->val))
        return 0;
    if(A->val == B->val)
        return isSameTree(A->left, B->left) && isSameTree(A->right, B->right);
    
    return 0;
}
