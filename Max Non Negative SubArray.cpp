vector<int> Solution::maxset(vector<int> &A) {
    vector <int> sol;
    int start = 0, end = 0;
    int size = A.size();
    long long int temp = 0, max = 0, tempStart = 0;
    for(int i = 0; i < size; i++) {
        if(A[i] >= 0) {
            temp += A[i];
        }
        else {
            temp = 0;
            tempStart = i + 1;
        }
        if(max < temp) {
            start = tempStart;
            max = temp;
            end = i;
        }
        else if(max == temp) {
            if(i - tempStart > end - start) {
                start = tempStart;
                end = i;
            }
            else if(i - tempStart == end - start) {
                if(tempStart < start) {
                    start = tempStart;
                    end = i;
                }
                else {
                    start = start;
                    end = i;
                }
            }
        }
    }
    if(start == 0 && end == 0 && A[0] < 0) {
        return sol;
    }
    for(int i = start; i <= end; i++) {
        sol.push_back(A[i]);
    }
    return sol;
}
