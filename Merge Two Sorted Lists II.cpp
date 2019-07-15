void Solution::merge(vector<int> &A, vector<int> &B) {
    int s1 = A.size(), s2 = B.size();
    int s3 = s2;
    int j = 0, k = 0;
    while(s3) {
        if(B[k] <= A[j] && j < s1 && k < s2) {
            A.insert(A.begin() + j, B[k]);
            s1++;
            k++;
            j++;
            s3--;
        }
        else if(A[j] < B[k] && j < s1 && k < s2) {
            j++;
        }
        else if((j == s1) && (k < s2)) {
            A.push_back(B[k]);
            k++;
            j++;
            s1++;
            s3--;
        }
    }
    
}
