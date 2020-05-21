// TC: 

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    if (A.size() <= 1) 
        return 0;
    int ans = 0;
    for (int i = 1; i < A.size(); i++) {
        // Using maxfunction to access the maximum value among the two.
        ans += max(abs(A[i] - A[i-1]), abs(B[i] - B[i-1]));
    }
    return ans;
}
