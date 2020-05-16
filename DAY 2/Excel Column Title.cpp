// Question: https://www.interviewbit.com/problems/excel-column-title/
// TC: O(n)

string Solution::convertToTitle(int A) {
    string map = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    string ans;
    while(A > 0){
        A = A - 1;
        int rem = A % 26;
        ans = (map[rem]) + ans;
        A = A / 26;
    }
    return ans;
}
