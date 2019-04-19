vector<int> Solution::primesum(int A) {
    vector <bool> sol(A);
    vector<int> meh;
    fill(sol.begin(), sol.end(), true);
    for(int i = 2; i < sqrt(A); i++) {
        if(sol[i]) {
            for(int j = i * i; j < A; j = j + i) {
                sol[j] = false;
            }
        }
    }
    for(int i = 2; i < A; i++) {
        if(sol[i] && sol[A - i]) {
            meh.push_back(i);
            meh.push_back(A - i);
            return meh;
        }
    }
}
