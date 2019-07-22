int Solution::minDistance(string A, string B) {
    int l1 = A.length(), l2 = B.length();
    vector<vector<int>> distance(l1 + 1, vector<int>(l2 + 1, 0));
    for(int i = 0; i < l1 + 1; i++) {
        for(int j = 0; j < l2 + 1; j++) {
            if(i == 0)
                distance[i][j] = j;
            else if(j == 0)
                distance[i][j] = i;
        }
    }
    
    for(int i = 1; i <= l1; i++) {
        for(int j = 1; j <= l2; j++) {
            if(A[i - 1] ==B[j - 1])
                distance[i][j] = distance[i - 1][j - 1];
            else {
                distance[i][j] = 1 + min(distance[i - 1][j - 1], min(distance[i - 1][j], distance[i][j - 1]));
            }
        }
    }
    return distance[l1][l2];
}
