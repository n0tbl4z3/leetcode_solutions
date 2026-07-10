class Solution {
public:
    bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }

   
    int charCounts[26] = {0};

    
    for (int i = 0; i < s.length(); i++) {
        charCounts[s[i] - 'a']++; 
    }

   
    for (int i = 0; i < t.length(); i++) {
        charCounts[t[i] - 'a']--;
    }

    
    for (int i = 0; i < 26; i++) {
        if (charCounts[i] != 0) {
            return false; 
        }
    }

    return true;
    }
        
};