class Solution {
public:
    int hammingWeight(int n) {
        

	int nofbits = 0;
	while (n != 0)
	{
		if (n % 2 == 1)
		{
			nofbits = nofbits + 1;
		}
		n = n / 2;
	}
    return nofbits;
    }
};