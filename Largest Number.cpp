bool check(int a, int b) {
    string str1 = to_string(a);
    string str2 = to_string(b);
    string x = str1 + str2;
    string y = str2 + str1;
    if(x > y) {
        return true;
    }
    return false;
}

string Solution::largestNumber(const vector<int> &A) {
    vector <int> sol = A;
    sort(sol.begin(), sol.end(), check);
    string str = "";
    for(int i = 0; i < sol.size(); i++) {
        str += to_string(sol[i]);
    }
    if(str[0] == '0')
        return "0";
    else {
        return str;
    }
}
