// TC:

// Approach: Here we have used the inbuilt GCD function but you cannot use it i interview so keep in mind to implement the GCD function by yourself.

int Solution::gcd(int A, int B) {
    if(B == 0)
        return A;
    return gcd(B, A%B);
}
