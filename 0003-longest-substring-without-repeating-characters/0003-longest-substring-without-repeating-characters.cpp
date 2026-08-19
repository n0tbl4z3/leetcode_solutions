class Solution {
public:
    int lengthOfLongestSubstring(string s) {
unordered_map<char, int> ump;

int longest = 0;
int left = 0;

for (int i = 0; i < s.length(); i++) {

    if (ump.find(s[i]) != ump.end() && ump[s[i]] >= left) {
        left = ump[s[i]] + 1;
    }

    ump[s[i]] = i;

    longest = max(longest, i - left + 1);
}

return longest;
    }
};