class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        int n = nums.size();

        if (k == n) {
            int ans = nums[0];

            for (int i = 1; i < n; i++) {
                ans = max(ans, nums[i]);
            }

            return ans;
        }

        if (k == 1) {

            unordered_map<int, bool> mp;

            for (int i = 0; i < n; i++) {

                if (mp.find(nums[i]) == mp.end()) {
                    mp[nums[i]] = 0;
                }
                else {
                    mp[nums[i]] = 1;
                }
            }

            int ans = -1;

            for (int i = 0; i < n; i++) {

                if (mp[nums[i]] == 0) {
                    ans = max(ans, nums[i]);
                }
            }

            return ans;
        }

        bool firstUnique = true;
        bool lastUnique = true;

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[0]) {
                firstUnique = false;
                break;
            }
        }

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[n - 1]) {
                lastUnique = false;
                break;
            }
        }

        if (firstUnique && lastUnique) {
            return max(nums[0], nums[n - 1]);
        }

        if (firstUnique) {
            return nums[0];
        }

        if (lastUnique) {
            return nums[n - 1];
        }

        return -1;
    }
};