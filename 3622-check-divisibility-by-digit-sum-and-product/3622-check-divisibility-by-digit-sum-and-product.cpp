class Solution {
public:
    bool checkDivisibility(int n) {
	int num = n;
	long long int sumDigits = 0;
	long long int productDigits = 1;
	while (n != 0)
	{
		sumDigits = sumDigits + (n % 10);
		productDigits = productDigits * (n % 10);
		n = n / 10;
	}

	return num % (sumDigits + productDigits) == 0 ? true : false;
}
};