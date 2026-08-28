    class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max_val = 0;

        while (left < right) {
            int current_product =
                min(height[left], height[right]) * (right - left);

            max_val = max(max_val, current_product);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max_val;
    }
};
