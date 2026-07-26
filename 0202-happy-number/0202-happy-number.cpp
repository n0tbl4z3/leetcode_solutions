class Solution {
public:
    bool isHappy(int n) {
        int sumSquares=0;
int i = 1;
while (sumSquares != 1 && i != INT16_MAX)
{
	sumSquares = 0;
	while (n != 0)
	{
		sumSquares = sumSquares + (n % 10) * (n % 10);
		n = n / 10;
	}
	n = sumSquares;
	i++;
};
if (sumSquares == 1)
	return true;
else
	return false;
    }
};