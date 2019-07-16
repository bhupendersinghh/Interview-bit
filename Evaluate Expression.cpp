bool isOperator(string x) {
    if(x == "*" ||  x == "+" || x == "-" || x == "/") {
        return true;
    }
    return false;
}

int val(int x, int y, string a) {
    if(a == "+")
        return x + y;
    else if(a == "*")
        return x * y;
    else if(a == "-")
        return x - y;
    else
        return x / y;
}

int Solution::evalRPN(vector<string> &A) {
    int size = A.size();
    stack<int> sol;
    for(int i = 0; i < size; i++) {
        if(isOperator(A[i])) {
            int y = sol.top();
            sol.pop();
            int x = sol.top();
            sol.pop();
            sol.push(val(x, y, A[i]));
        }
        else {
            sol.push(stoi(A[i]));
        }
    }
    return sol.top();
}
