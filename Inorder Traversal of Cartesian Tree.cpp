int findMax(vector<int> &A, int start, int end) {
    int mx = INT_MIN;
    int in = -1;
    for(int i = start; i <= end; i++) {
        if(A[i] > mx){
            mx = A[i];
            in = i;
        }
    }
    return in;
}

TreeNode* buildSubTree(vector<int> &A, int start, int end) {
    if(start == end)
        return new TreeNode(A[start]);
    if(start > end)
        return NULL;
    int max = findMax(A, start, end);
    TreeNode* root = new TreeNode(A[max]);
    root->left = buildSubTree(A, start, max - 1);
    root->right = buildSubTree(A, max + 1, end);
    return root;
}

TreeNode* Solution::buildTree(vector<int> &A) {
    int size = A.size();
    TreeNode* root = buildSubTree(A, 0, size - 1);
    return root;
}
