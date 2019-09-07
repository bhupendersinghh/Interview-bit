void sol(int i, vector<int> &temp, vector<int> &A, vector<vector<int> > &ans) {
    for(i; i < A.size(); i++) {
        temp.push_back(A[i]);
        ans.push_back(temp);
        sol(i + 1, temp, A, ans);
        temp.pop_back();
    }
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    sort(A.begin(), A.end());
    vector<vector<int> > ans;
    vector<int> temp;
    ans.push_back(temp);
    sol(0, temp, A, ans);
    return ans;
}
