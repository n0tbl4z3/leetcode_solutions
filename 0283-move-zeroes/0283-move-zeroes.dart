class Solution {
  void moveZeroes(List<int> nums) {
    int indicator = 0;

    for (int i = 0; i < nums.length; i++) {
      if (nums[i] != 0) {
        int temp = nums[indicator];
        nums[indicator] = nums[i];
        nums[i] = temp;

        indicator++;
      }
    }
  }
}
