class Solution {
public:
    int reverseBits(int n) {
        int newNum = 0;
long long int fac = 1;
bool arr[32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
for (int i = 0; i <= 31 && n != 0; i = i + 1, n = n / 2)
{
	arr[i] = n % 2;
}
for (int j = 31; j >= 0; j = j - 1)
{
	newNum = newNum + (arr[j]) * fac;
	fac = fac * 2;
}
return newNum;
    }
};