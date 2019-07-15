int Solution::removeDuplicates(vector<int> &A) {
    int size = A.size();
    vector<int> sol;
    for(int i = 0; i < size - 1; i++) {
        if(A[i] != A[i + 1]) {
            sol.push_back(A[i]);
        }
    }
    sol.push_back(A[size - 1]);
    for(int i = 0; i < sol.size(); i++) {
        A[i] = sol[i];
    }
    return sol.size();
}
