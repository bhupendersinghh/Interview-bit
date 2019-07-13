//Editorial solution

vector<int> Solution::maxone(vector<int> &A, int B) 
{
    // current window left and right
    int wL = 0, wR = 0;
    // best window (widest window)
    int bestL = 0, bestWindow = 0;
    // zero count in window
    int zeroCount = 0;
    
    while(wR < A.size())
    {
        // when zero count is less than B
        // expand window in right side
        if(zeroCount <= B)
        {
            if(A[wR] == 0)
                zeroCount++;
            wR++;
        }
        // when zero count is more than B
        // shrink window from left side
        if(zeroCount > B)
        {
            if(A[wL] == 0)
                zeroCount--;
            wL++;
        }
        // update best window if current window is larger
        if(wR-wL > bestWindow)
        {
            bestWindow = wR-wL;
            bestL = wL;
        }
    }
    // max contiguous position of 1's after flipped
    vector<int> r;
    for(int i=0; i<bestWindow; i++)
        r.push_back(bestL+i);
    return r;
}

