int Solution::lengthOfLastWord(const string A) {
    if(A.length() == 0) {
        return 0;
    }
    else {
        int len = 0;
        for(int i = A.length() - 1; i >= 0; i--) {
            if(A[i] == ' ') {
                if(len == 0) {
                    continue;
                }
                else
                    return len;
            }
            len++;
        }
        return len;
    }
}
