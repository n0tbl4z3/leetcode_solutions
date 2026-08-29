class Solution {
public:
    string intToRoman(int n) {
        int factor = 1;
        string s;
        vector<int> nums;

        while (n != 0) {
            nums.push_back((n % 10) * factor);
            factor *= 10;
            n /= 10;
        }

        reverse(nums.begin(), nums.end());

        vector<int> values = {
            1000, 900, 500, 400,
            100, 90, 50, 40,
            10, 9, 5, 4, 1
        };

        vector<string> symbols = {
            "M", "CM", "D", "CD",
            "C", "XC", "L", "XL",
            "X", "IX", "V", "IV", "I"
        };

        for (int i = 0; i < nums.size(); i++) {
            while (nums[i] != 0) {
                for (int j = 0; j < values.size(); j++) {
                    if (nums[i] >= values[j]) {
                        s += symbols[j];
                        nums[i] -= values[j];
                        break;
                    }
                }
            }
        }

        return s;
    }
};