class Solution {
public:
    int thirdMax(vector<int>& nums) {
sort(nums.begin(), nums.end());
int thirdMax=nums[nums.size()-1];
int count = 1;
for (int i = nums.size() - 2; i >= 0; i--)
{
	if (nums[i] < thirdMax && count != 3)
	{
		thirdMax = nums[i];
		count++;
	}
	if (count == 3)
		break;
}
return count == 3 ? thirdMax : nums.back();
    }
};