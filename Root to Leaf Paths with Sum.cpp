void allPaths(TreeNode* root, int remSum, vector<int> &curr, vector<vector<int> > &ans) {
    if(!root)
        return;
    
    remSum -= root->val;
    curr.push_back(root->val);
    
    if(!root->left && !root->right) {
        if(remSum == 0) {
            ans.push_back(curr);
        }
        curr.pop_back();
        return;
    }
    
    allPaths(root->left, remSum, curr, ans);
    allPaths(root->right, remSum, curr, ans);
    curr.pop_back();
    return;
}

vector<vector<int> > Solution::pathSum(TreeNode *root, int sum) {
    vector<vector<int> > ans;
    vector<int> curr;
    allPaths(root, sum, curr, ans);
    return ans;
}

