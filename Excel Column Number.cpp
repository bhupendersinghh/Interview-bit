int Solution::titleToNumber(string A) {
    int length = A.length();
    long long int res = 0;
    int m = 1;
    for(int i = length - 1; i >= 0; i--) {
        res = res + (m * (A[i] - 64));
        m *= 26;
    }
    return res;
}
