int Solution::singleNumber(const vector<int> &A) {
    int sol = 0;
    int num = A[0];

    for(int i = 1; i < A.size(); i++) {
        num ^= A[i];
    }
    return num;
}
