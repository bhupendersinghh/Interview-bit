int Solution::solve(int A) {
    long int three = 24;
    long int two = 12;
    long int temp = 0;
    for(int i = 2; i <= A; i++) {
        temp = three;
        three = ((11 * temp) + (10 * two)) % 1000000007;
        two = ((5 * temp) + (7 * two)) % 1000000007;
    }
    
    long long int ans = (three + two) % 1000000007;
    return ans;
}
