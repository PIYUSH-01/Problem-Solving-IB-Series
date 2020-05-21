// TC:

// Approach: Here we have not used the inbuilt GCD function and you cannot use it in interview so keep in mind to implement the GCD function by yourself.

int Solution::gcd(int A, int B) {
    if(B == 0)
        return A;
    return gcd(B, A%B);
}
