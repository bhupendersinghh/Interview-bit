map<vector<int>, bool> check;
void sol(int index, vector<int> &A, vector<vector<int> > &ans, vector<int> &temp) {
    for(int i = index; i < A.size(); i++) {
        temp.push_back(A[i]);
        if(!check[temp]) {
            ans.push_back(temp);
            check[temp] = true;
        }
        sol(i + 1, A, ans, temp);
        temp.pop_back();
    }
}

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    sort(A.begin(), A.end());
    check.clear();
    vector<int> temp;
    vector<vector<int> > ans;
    ans.push_back(temp);
    sol(0, A, ans, temp);
    return ans;
}
