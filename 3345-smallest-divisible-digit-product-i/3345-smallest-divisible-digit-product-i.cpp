class Solution {
public:
    int smallestNumber(int n, int t) {
        int itr = n;
int pr = 1;
bool isFound = false;
while (isFound == false)
{
	pr = 1;
	n = itr;
	while (n != 0)
	{
		pr = pr * (n % 10);
		n = n / 10;
	}
	if (pr% t==0) {
		isFound = true;
		break;
	}
	itr++;

}
return itr ;
    }
};