void Solution::setZeroes(vector<vector<int> > &A) {
    int rows = A.size();
    int cols = A[0].size();
    bool row = false, col = false;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i == 0 && A[i][j] == 0) {
                row = true;
            }
            if(j == 0 && A[i][j] == 0) {
                col = true;
            }
            if(A[i][j] == 0) {
                A[0][j] = 0;
                A[i][0] = 0;
            }
        }
    }
    for(int i = 1; i <rows; i++) {
        for(int j = 1; j < cols; j++) {
            if(A[0][j] == 0 || A[i][0] == 0) {
                A[i][j] = 0;
            }
        }
    }
    if(row) {
        for(int i = 0; i < cols; i++) {
            A[0][i] = 0;
        }
    }
    if(col) {
        for(int i = 0; i < rows; i++) {
            A[i][0] = 0;
        }
    }

}
