vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> sol;
    int size = A.size();
    stack<int> s;
    for(int i = 0; i < size; i++) {
        while(!s.empty() && s.top() >= A.at(i)) {
            s.pop();
        }
        if(!s.empty())
            sol.push_back(s.top());
        else
            sol.push_back(-1);
        s.push(A.at(i));
    }
    return sol;
}
