int Solution::maxSubArray(const vector<int> &A) {
    int maxSoFar = INT_MIN, maxEnd = 0;
    for(int i = 0; i < A.size(); i++) {
        maxEnd = maxEnd + A[i];
        if(maxSoFar < maxEnd) {
            maxSoFar = maxEnd;
        }

        if(maxEnd < 0) {
            maxEnd = 0;
        }

    }
    return maxSoFar;
}
