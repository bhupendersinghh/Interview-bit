void sol(vector<int> &A, int index, int target, int currSum, vector<int> &curr, vector<vector<int> > &ans) {
    if(currSum > target)
        return;
    if(currSum == target) {
        ans.push_back(curr);
        return;
    }
    for(int i = index; i < A.size(); i++) {
        curr.push_back(A[i]);
        currSum += A[i];
        sol(A, i + 1, target, currSum, curr, ans);
        curr.pop_back();
        currSum -= A[i];
    }
    
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    vector<int> temp;
    vector<vector<int> > ans;
    sol(A, 0, B, 0, temp, ans);
    int size = ans.size();
    for(int i = 1; i < size; i++) {
        if(ans[i] == ans[i - 1]) {
            ans.erase(ans.begin() + i);
            i--;
            size--;
        }
    }
    return ans;
}
