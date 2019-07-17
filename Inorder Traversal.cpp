vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> sol;
    stack<TreeNode*> s;
    TreeNode* curr = A;
    while(curr || !s.empty()) {
        while(curr) {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        sol.push_back(curr->val);
        curr = curr->right;
    }
    return sol;
}