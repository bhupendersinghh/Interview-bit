int Solution::maxSpecialProduct(vector<int> &A){
    int n = A.size();
    int B[n], C[n];
    stack<pair<long long int ,int> > S;
    pair<int ,int > p;
    p = make_pair(10000000000,0);
    S.push(p);
    for(int i = 0; i < n; i++) {
        while(A[i] >= S.top().first)
            S.pop();
        B[i] = S.top().second;
        p = make_pair(A[i], i);
        S.push(p);
    }
    while(!S.empty())
        S.pop();
    p = make_pair(10000000000,0);
    S.push(p);
    for(int i = n-  1; i >= 0; i--) {
        while(A[i] >= S.top().first)
            S.pop();
        C[i] = S.top().second;
        p = make_pair(A[i], i);
        S.push(p);
    }
    long long int x = B[0], y = C[0], m;
    m = x * y;
    for(int i = 0; i < n; i++) {
        x = B[i];
        y = C[i];
        m = max(m, x * y);
    }
    return m % 1000000007;

}
