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

//Editorial
vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
    vector<vector<int> > output;
    if (root == NULL) return output;
    stack<TreeNode*> cur_layer;
    cur_layer.push(root);
    stack<TreeNode*> next_layer;
    vector<int> layer_output;
    int d = 0; // 0: left to right; 1: right to left.

    while (!cur_layer.empty()) {
        TreeNode* node = cur_layer.top();
        cur_layer.pop();
        layer_output.push_back(node->val);
        if (d == 0) {
            if (node->left != NULL) next_layer.push(node->left);
            if (node->right != NULL) next_layer.push(node->right);
        } else {
            if (node->right != NULL) next_layer.push(node->right);
            if (node->left != NULL) next_layer.push(node->left);
        }

        if (cur_layer.empty()) {
            output.push_back(layer_output);
            layer_output.clear();
            cur_layer.swap(next_layer);
            if (d == 1) d = 0;
            else d = 1;
        }
    }
    return output;        
}
