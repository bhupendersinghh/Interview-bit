void sol(int start, int size, vector<int> &temp, vector<vector<int> > &ans) {
    if(start >= size) {
        ans.push_back(temp);
        return;
    }
    for(int i = start; i < size; i++)  {
        swap(temp[start], temp[i]);
        sol(start + 1, size, temp, ans);
        swap(temp[start], temp[i]);
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<int> temp = A;
    vector<vector<int> > ans;
    sol(0, A.size(), temp, ans);
    return ans;
}
