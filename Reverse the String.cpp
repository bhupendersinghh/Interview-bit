void Solution::reverseWords(string &A) {
    vector<string> sol;
    string temp = "";
    int length = A.length();
    for(int i = 0; i < length; i++) {
        if(A[i] == ' ') {
            sol.push_back(temp);
            temp = "";
        }
        else if(i == length - 1) {
            temp += A[i];
            sol.push_back(temp);
        }
        else {
            temp += A[i];
        }
    }
    A = "";
    for(int i = sol.size() - 1; i >= 0; i--) {
        if(i == 0) {
            A += sol[i];
        }
        else {
            A += sol[i];
            A += " ";
        }
    }
}
