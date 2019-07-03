int val(char c) {
    if(c == 'I')
        return 1;
    else if(c == 'V')
        return 5;
    else if(c == 'X')
        return 10;
    else if(c == 'L')
        return 50;
    else if(c == 'C')
        return 100;
    else if(c == 'D')
        return 500;
    else if(c == 'M')
        return 1000;
    else
        return 0;
}

int Solution::romanToInt(string A) {
    int sol = 0;
    for(int i = 0; i < A.length(); i++) {
        if(val(A[i]) < val(A[i + 1])) {
            sol += val(A[i + 1]) - val(A[i]);
            i++;
            continue;
        }
        else {
            sol += val(A[i]);
        }
    }
    return sol;
}
