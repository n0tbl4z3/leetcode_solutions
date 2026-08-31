class Solution {
public:
    int dayOfYear(string date) {
        int y = stoi(date.substr(0, 4));
        int m = stoi(date.substr(5, 2));
        int d = stoi(date.substr(8, 2));

        int ans = (367 * m - 362) / 12 + d;

        if (m > 2) {
            ans -= 2;
            if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
                ans++;
        }

        return ans;
    }
};
