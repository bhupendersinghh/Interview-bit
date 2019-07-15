vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> sol;
    int s1 = A.size(), s2 = B.size();
    int i = 0, k = 0;
    while(i < s1 && k < s2) {
        if(A[i] == B[k]) {
            sol.push_back(B[k]);
            i++;
            k++;
        }
        else if(A[i] > B[k]) {
            k++;
        }
        else {
            i++;
        }
    }
    return sol;
}
