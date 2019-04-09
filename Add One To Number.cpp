vector<int> Solution::plusOne(vector<int> &A) {
    vector <int> sol;
    int carry = 1;
    int curr;
    bool change = false;
    for(int i = A.size() - 1; i >= 0; i--) {
        curr = A[i];
        if(curr == 9 && carry == 1) {
            carry = 1;
            sol.push_back(0);
        }
        else {
            sol.push_back(curr + carry);
            carry = 0;
        }
    }
    if(carry == 1) {
        sol.push_back(1);
    }
    std::reverse(sol.begin(), sol.end());
    int i = 0;
    while(1) {
        if(sol[0] == 0) {
            sol.erase(sol.begin());
            i++;
        }
        else {
            break;
        }
    }
    return sol;
}
