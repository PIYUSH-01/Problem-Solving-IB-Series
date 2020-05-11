bool isPrime(int num){
    
    // In this function we will check the number to be prime or not by calculating 4 cases.
    
    // Case 1:- If num is less than or equal to 1
    if(num <= 1) 
        return false;
    // Case 2:
    if(num == 2)
        return true;
    // Case 3:- Checking for even numbers.
    if(num%2 == 0) 
        return false;
        
    // Case 4:- We are using this loop only for ODD numbers.
    for(int i = 3; i*i <= num; i += 2){
        if(num % i == 0) 
            return false;
    }
    return true;
}

vector<int> Solution::primesum(int A) {
    vector<int> result;
    // result.reserve function to reseve 2 blocks of memory.
    result.reserve(2);

    for(int i=2; i<A; i++){
        if(isPrime(i) && isPrime(A-i)){
            result.push_back(i);
            result.push_back(A-i);
            return result;
        }
    }
    return result;
}
