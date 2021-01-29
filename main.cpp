unsigned int countBits(unsigned long long int n){
	int b = 0; //initialise variable to hold bits
	while(n > 0) { //repeat while n is greater than zero
		n % 2 == 1 ? b++ : b; //divide by 2 on remainder increment bit count
		n = n / 2; //reduce n by division - ensure result is not stored using scientific notation as this can skew large numbers
	}
	return b; //return count
}
