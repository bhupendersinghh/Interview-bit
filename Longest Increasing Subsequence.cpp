int Solution::lis(const vector<int> &A) {
    int n = A.size();
    int inc[n];
    inc[0] = 1;
    for(int i = 1; i < n; i++) {
        inc[i] = 1;
        for(int j = i - 1; j >= 0; j--) {
            if(A[j] < A[i] && inc[i] < inc[j] + 1)
                inc[i] = inc[j] + 1;
        }
    }
    int mx = 0;
    for(int i = 0; i < n; i++) {
        mx = max(mx, inc[i]);
    }
    return mx;
}
