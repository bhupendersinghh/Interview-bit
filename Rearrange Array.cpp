void Solution::arrange(vector<int> &A) {
    int length = A.size();
    for(int i = 0; i < length; i++) {
        A[i] = A[i] + (A[A[i]] % length) * length;
    }
    for(int i = 0; i < length; i++) {
        A[i] = A[i] / length;
    }
}
