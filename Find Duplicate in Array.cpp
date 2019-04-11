int Solution::repeatedNumber(const vector<int> &A) {
    if(A.size() < 2) {
        return -1;
    }
    vector <bool> v(A.size());
    fill(v.begin(), v.end(), true);

    for(int i = 0;i < A.size(); i++){
        if(v[A[i]]){
            v[A[i]] = false;
        }
        else
            return A[i];
    }
}
