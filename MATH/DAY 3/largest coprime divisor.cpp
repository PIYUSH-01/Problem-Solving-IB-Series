// TC: 

int Solution::cpFact(int A, int B) {
    
    int gcd_val = __gcd(A, B);
    // best case
    if(gcd_val == 1){
        return A;
    }
    else{
        while(gcd_val != 1){
            A = A / gcd_val;
            gcd_val = __gcd(A, B);
        }
        return A;
    }
    
}
