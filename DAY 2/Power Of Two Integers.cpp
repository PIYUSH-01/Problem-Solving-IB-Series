// Question link: https://www.interviewbit.com/problems/power-of-two-integers/

// Time complexity: 

int Solution::isPower(int A) {
	if (A == 1)
	{
		return 1;
	}

	for (int i = 2; i*i <= A; i++) {
		float logr = log(A)/log(i);
		if (ceil(logr) == floor(logr)){
			return true;
		}
	}
	return false;
}