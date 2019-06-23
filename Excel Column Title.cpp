string Solution::convertToTitle(int A) {
    string res = "";
    char temp;
    while(A != 0) {
        temp = (A % 26) + 64;
        if(A % 26 == 0) {
            temp = 'Z';
            A = (A / 26) - 1;
        }
        else {
            A = A / 26;
        }
        res += temp;
    }
    std::reverse(res.begin(), res.end());
    return res;
}
