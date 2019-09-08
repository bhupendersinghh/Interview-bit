void sol(vector<int> &A, int index, vector<int> &curr, vector<vector<int> > &ans, int currSum, int target) {
    if(currSum > target)
        return;
    if(currSum == target) {
        ans.push_back(curr);
        return;
    }
    
    for(int i = index; i < A.size(); i++) {
        curr.push_back(A[i]);
        currSum += A[i];
        sol(A, i, curr, ans, currSum, target);
        curr.pop_back();
        currSum -= A[i];
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    vector<vector<int> > ans;
    vector<int> temp;
    vector<int> unique;
    for (int i = 0; i < A.size(); i++) {
        if (i == 0 || A[i] != A[i-1]) {
            unique.push_back(A[i]);
        }
    }
    sol(unique, 0, temp, ans, 0, B);
    return ans;
}
