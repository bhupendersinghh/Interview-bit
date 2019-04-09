int Solution::coverPoints(vector<int> &a, vector<int> &b) {
        int sum = 0, x, y;
        for(int i = 1; i < a.size(); i++) {
            x = 0, y = 0;
            x = abs(a[i] - a[i- 1]);
            y = abs(b[i] - b[i - 1]);
            if(x + y > 1) {
                sum += max(x, y);
            }
            else {
                sum += x + y;
            }
        }
    return sum;
}
