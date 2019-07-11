unsigned int Solution::reverse(unsigned int A) {
    unsigned int sol = 0;
    int bits = 31;
    while(A) {
        sol += (pow(2, bits) * (A % 2));
        bits--;
        A /= 2;
    }
    return sol;
}
