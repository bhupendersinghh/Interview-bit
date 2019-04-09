vector<int> Solution::wave(vector<int> &A) {
    vector <int> C = A;
    vector <int> sol;
    int size = A.size();
    sort(C.begin(), C.end());
    if(size % 2 == 0) {
        for(int i = 0; i < size / 2; i++) {
            sol.push_back(C[(2 * i) + 1]);
            sol.push_back(C[2 * i]);
        }
    }
    else {
        for(int i = 0; i < (size + 1) / 2; i++) {
            if(i == ((size + 1) / 2) - 1) {
                sol.push_back(C[2 * i]);
            }
            else {
                sol.push_back(C[(2 * i) + 1]);
                sol.push_back(C[2 * i]);
            }
        }
    }
    return sol;
}
