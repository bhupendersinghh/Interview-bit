int Solution::threeSumClosest(vector<int> &A, int B) {
    std::sort(A.begin(), A.end());
    int size = A.size();
    if(size < 3) {
        return 0;
    }
    int min = INT_MAX;
    int sum = INT_MAX;
    for(int i = 0; i < size - 2; i++) {
        int left = i + 1, right = size - 1;
        while(left < right) {
            int temp = A[i] + A[left] + A[right];
            int diff = abs(temp - B);
            if(diff == 0) {
                return temp;
            }
            if(diff < min) {
                min = diff;
                sum = temp;
            }
            if(temp > B) {
                right--;
            }
            else {
                left++;
            }
        }
    }
    return sum;
}
