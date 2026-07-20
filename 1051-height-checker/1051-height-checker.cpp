class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector <int>expected=heights;
int count = 0;
sort(expected.begin(), expected.end());
for (int i = 0; i < heights.size(); i=i+1)
{
	if (heights[i] != expected[i])
	{
		count = count + 1;
	}
}
return count;
    }
};