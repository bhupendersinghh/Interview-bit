void setValues(vector<string> &val) {
    val[0] = "0";
    val[1] = "1";
    val[2] = "abc", val[3] = "def", val[4] = "ghi", val[5] = "jkl", val[6] = "mno", val[7] = "pqrs", val[8] = "tuv", val[9] = "wxyz";
}

void sol(int index, vector<string> val, string &temp, vector<string> &ans, string A) {
    if(temp.size() == A.size()) {
        ans.push_back(temp);
        return;
    }
    for(int i = index; i < A.size(); i++) {
        for(int j = 0; j < val[A[index] - '0'].size(); j++) {
            temp += val[A[index] - '0'][j];
            sol(i + 1, val, temp, ans, A);
            temp.pop_back();
        }
    }
}

vector<string> Solution::letterCombinations(string A) {
    vector<string> val(10);
    setValues(val);
    string temp;
    vector<string> ans;
    sol(0, val, temp, ans, A);
    return ans;
}
