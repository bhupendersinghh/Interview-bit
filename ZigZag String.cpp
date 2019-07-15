//Understood from youtube video by GoodTecher

string Solution::convert(string A, int B) {
    int length = A.length();
    if(B  > length || B == 1) {
        return A;
    }
    string sol = "";
    
    //Setting the interval (difference between indexes of 2 adjacent columns)
    int interval = (2 * B) - 2;
    
    //Counter for incrementing the ith character of solution string
    int count =  0;
    for(int i = 0; i < B; i++) {
        //Setting step interval (between columns)
        int step = interval - (2 * i);
        for(int j = i; j < length; j += interval) {
            sol += A[j];
            count++;
            
            //Step should be greater than 0 because negative steps aren't possible 
            //should be less than interval because if it is equal, there will not be a element in between, just adjacent columns 
            //j + step < length because we can't access a character not in range
            if(step > 0 && step < interval && j + step < length) {
                sol += A[j + step];
            }
        }
    }
    return sol;
}
