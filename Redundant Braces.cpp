int Solution::braces(string A) {
    stack<int> sol;
    int length = A.length();
    for(int i = 0; i < length; i++) {
        if(A[i] == ')') {
            char top = sol.top();
            sol.pop();
            if(top == '(')
                return 1;
            else {
                int count = 0;
                while(top != '(') {
                    top = sol.top();
                    sol.pop();
                    count++;
                }
                if(count == 1)
                    return 1;
            }
        }
        else {
            sol.push(A[i]);
        }
    }
    return 0;
}
