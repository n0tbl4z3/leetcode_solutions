class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
   
    vector<int> result;
    int i = 0;
    int j = 0;
    while(i<index.size() && j<nums.size())
    {
        result.insert(result.begin()+index[i], nums[j]);
        i++;
        j++;
    }
    return result;
    }
};