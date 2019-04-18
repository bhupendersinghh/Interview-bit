// This solution is not optimised i.e. partially correct

void Solution::rotate(vector<vector<int> > &A) {
    int size = A.size();
    int z, x = 1;
    z = size - 1;
    vector<vector <int> > temp(size);
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < x; j++) {
            temp[i].push_back(A[z][j]);
        }
        x++;
        z--;
    }
    int r = 0, c = 0, konsa = 0;
    for(int i = size - 1; i >= 0; i--) {
        r = 0;
        for(int j = 0; j < temp[konsa].size(); j++) {
            A[r][c] = temp[konsa][j];
            r++;
        }
        konsa++;
        for(int j = r; j < size; j++) {
            A[r][c] = A[i][j];
            r++;
        }
        c++;
    }
}

//Correct solution
void Solution::rotate(vector<vector<int> > &matrix) {

        int len = matrix.size();
        for (int i = 0; i < len / 2; i++) {
            for (int j = i; j < len - i - 1; j++) {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[len - j - 1][i];
            matrix[len - j - 1][i] = matrix[len - i - 1][len - j - 1];
            matrix[len - i - 1][len - j - 1] = matrix[j][len - i - 1];
            matrix[j][len - i - 1] = tmp;
            }
      }
}
