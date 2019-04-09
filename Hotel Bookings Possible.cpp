bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());
    int count = 0;
    int u = 0;
    for(int i = 0; i < arrive.size(); i++) {
        if(arrive[i] < depart[u]) {
            count++;
        }
        else {
            count--;
            i--;
            u++;
        }
        if(count > K) {
            return false;
        }
    }
    return true;
}
