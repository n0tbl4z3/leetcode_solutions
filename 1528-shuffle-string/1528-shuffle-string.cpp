class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
         string result(s.length(), ' ');
    int i = 0;
    while (i < indices.size())
    {
        result[indices[i]] = s[i];
        i++;
    }
    return result;
    }
};