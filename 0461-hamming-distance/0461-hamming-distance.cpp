class Solution {
public:
    int hammingDistance(int x, int y) {
        vector<int>firstVal;
vector<int>secondVal;
int distance = 0;
while (x != 0 || y != 0)
{
	firstVal.push_back(x%2);
	secondVal.push_back(y % 2);
	x = x / 2;
	y = y / 2;
}
for (int i = 0; i < firstVal.size(); i++)
{
	if (firstVal[i] != secondVal[i])
		distance++;
}
return distance;
    }
};