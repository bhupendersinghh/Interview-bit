int height(TreeNode* root) {
    if(!root)
        return 0;
    else {
        int lh = height(root->left);
        int rh = height(root->right);
        return (lh >= rh? lh + 1 : rh + 1);
    }
}


vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    TreeNode* root = A;
    int size = height(A);
    vector<vector<int> > sol(size);
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    int i = 0;
    while(q.size() > 1) {
        root = q.front();
        q.pop();
        if(root == NULL) {
            i++;
            q.push(NULL);
        }
        else {
            if(root->left)
                q.push(root->left);
            if(root->right)
                q.push(root->right);
            sol[i].push_back(root->val);
        }
    }
    for(int i = 0; i < sol.size(); i++) {
        if(i % 2 != 0) {
            reverse(sol[i].begin(), sol[i].end());
        }
    }
    return sol;
}
