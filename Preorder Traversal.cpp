vector<int> Solution::preorderTraversal(TreeNode* A) {
    TreeNode* root = A;
    vector<int> sol;
    stack<TreeNode*> s;
    s.push(root);
    while(!s.empty()) {
        root = s.top();
        sol.push_back(root->val);
        s.pop();
        if(root->right)
            s.push(root->right);
        if(root->left)
            s.push(root->left);
    }
    return sol;
}