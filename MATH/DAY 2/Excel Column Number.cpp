// TC: O(n)

// Basically in this question we have used the same approach that we use in conversions like if we convert a bnary to decimal.

int Solution::titleToNumber(string A) {
    
    int sum = 0, j = 0;
    for(int i=A.size() - 1; i >= 0; i--){
        sum = sum +(A[i] - 'A' + 1) * pow(26, j);
        j++;
    }
    return sum;
}
