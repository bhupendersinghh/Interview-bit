int helper(TreeNode* root1, TreeNode* root2) {
    if((!root1 && root2) || (root1 && !root2))
        return 0;
    if(!root1 && !root2)
        return 1;
    if(root1->val != root2->val)
        return 0;
    return helper(root1->left, root2->right) && helper(root1->right, root2->left); 
}


int Solution::isSymmetric(TreeNode* A) {
    if(!A)
        return 1;
    else {
        return helper(A->left, A->right);
    }
}
