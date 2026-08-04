class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
bool flag = false;
vector<int>checker;
for (int i = nums[0]; i <= nums[nums.size() - 1]; i++)
{
	flag = false;
	int j = 0;
	while (nums[j] <= i )
	{
		if (nums[j] == i)
			flag = true;
		j++;
		if (j >= nums.size())
			break;
	}
	if (flag == false)
		checker.push_back(i);
}
return checker;
    }
};