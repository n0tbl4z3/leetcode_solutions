class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
         vector<int> result;
    int smaller = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        smaller = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if(nums[j]<nums[i])
            {
                smaller++;
            }
        }
        result.push_back(smaller);
    }
    return result;
    }
};