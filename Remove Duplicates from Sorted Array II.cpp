int Solution::removeDuplicates(vector<int> &A) {
    int size = A.size();
    if(size < 3) {
        return size;
    }
    int j = 0;
    int count = 0;
    for(int i = 0; i < size - 1; i++) {
        if(count < 2) {
            A[j++] = A[i];
        }
        if(A[i] == A[i + 1]) {
            count++;
        }
        if(A[i] != A[i + 1])
            count = 0;
    }
    if(count < 2) {
        A[j++] = A[size - 1];
    }
    return j;
}
