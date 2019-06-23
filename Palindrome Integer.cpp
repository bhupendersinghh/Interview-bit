int Solution::isPalindrome(int A) {
    string str = to_string(A);
    string str2 = str;
    std::reverse(str.begin(), str.end());
    if(str2 == str) {
        return 1;
    }
    else {
        return 0;
    }
}
