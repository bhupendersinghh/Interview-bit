int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int size = A.size();
    for(int i = 0; i < size; i++) {
        if(A[i][0] <= B && A[i][A[i].size() - 1] >= B) {
            for(int j = 0; j < A[i].size(); j++) {
                if(binary_search(A[i].begin(), A[i].end(), B)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
