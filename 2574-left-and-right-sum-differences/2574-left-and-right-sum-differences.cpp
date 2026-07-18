class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum;
    vector<int> rightSum;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        leftSum.push_back(sum);
        sum =sum +nums[i];
    }
    
    sum = accumulate(nums.begin(), nums.end(), 0);
    for (int i = 0; i < nums.size(); i++)
    {
        sum =sum -nums[i];
        rightSum.push_back(sum);
        
    }

    for (int i = 0; i < leftSum.size(); i++)
    {
       leftSum[i]=abs(leftSum[i]-rightSum[i]);
    }

    return leftSum;
    }
};