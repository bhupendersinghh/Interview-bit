void sol(int i, vector<int> &temp, vector<vector<int> > &ans, int length, int A) {
    if(length == 0) {
        ans.push_back(temp);
        return;
    }
    for(i; i <= A; i++) {
        temp.push_back(i);
        sol(i + 1, temp, ans, length - 1, A);
        temp.pop_back();
    }
}

vector<vector<int> > Solution::combine(int A, int B) {
    vector<vector<int> > ans;
    vector<int> temp;
    sol(1, temp, ans, B, A);
    return ans;
}
