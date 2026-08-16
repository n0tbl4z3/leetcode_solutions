class Solution {
public:
    int search(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high) {
        int mean = low + (high - low) / 2;

        if (nums[mean] == target) {
            return mean; 
        }
        if (nums[mean] > target) {
            high = mean - 1;
        } else {
            low = mean + 1;
        }
    }
    return -1;
    }
};