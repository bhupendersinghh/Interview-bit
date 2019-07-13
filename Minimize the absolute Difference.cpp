//Editorial Solution


int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int ans = INT_MAX;
    
    int i = A.size() - 1, j = B.size() - 1, k = C.size() - 1;
    while(i >= 0 && j >= 0 && k >= 0)
    {
        int maxElement = max(A[i], max(B[j], C[k]));
        int minElement = min(A[i], min(B[j], C[k]));
        ans = min(ans, maxElement - minElement);
        if(A[i] == maxElement)
            i--;
        else if(B[j] == maxElement)
            j--;
        else if(C[k] == maxElement)
            k--;
    }
    return ans;
}