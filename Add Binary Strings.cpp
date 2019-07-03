int bigger(string A, string B) {
    int l1 = A.length(), l2 = B.length();
    if(l1 > l2) {
        return 1;
    }
    else if(l1 < l2) {
        return 2;
    }
    else {
        return 0;
    }
}

int val(char c) {
    if(c == '1')
        return 1;
    else 
        return 0;
}

int str(int A) {
    if(A == 0)
        return '0';
    else
        return '1';
}

string normalise(string A, int val) {
    string sol = "";
    for(int i = 0; i < val - A.length(); i++) {
        sol += '0';
    }
    sol += A;
    return sol;
}

string Solution::addBinary(string A, string B) {
    string sol;
    int big = bigger(A, B);
    int l1 = A.length(), l2 = B.length();
    if(big == 1) {
        B = normalise(B, l1);
    }
    else if(big == 2) {
        A = normalise(A, l2);
    }
    int carry = 0;
    int sum = 0;
    for(int i = A.length() - 1; i >= 0; i--) {
        sum = val(A[i]) + val(B[i]) + carry;
        if(sum == 3) {
            carry = 1;
            sum = 1;
        }
        else if(sum == 2) {
            sum = 0;
            carry = 1;
        }
        else if(sum == 1) {
            sum = 1;
            carry = 0;
        }
        else {
            sum = 0;
            carry = 0;
        }
        sol += str(sum);
    }
    carry == 1 ? sol += str(carry) : sol = sol;
    std::reverse(sol.begin(), sol.end());
    return sol;
}
