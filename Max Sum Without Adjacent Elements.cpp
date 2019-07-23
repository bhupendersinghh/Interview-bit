int Solution::adjacent(vector<vector<int> > &A) {
    int n = A[0].size();
    int arr[n + 1][2];
    memset(arr, 0, sizeof(arr));
    arr[0][1] = max(A[0][0], A[1][0]);
    for(int i = 1; i < n; i++) {
        int curr_max = max(A[0][i], A[1][i]);
        arr[i][0] = max(arr[i - 1][0], arr[i - 1][1]);
        arr[i][1] = arr[i - 1][0] + curr_max;
    }
    return max(arr[n - 1][0], arr[n - 1][1]);
    
}
