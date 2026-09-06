class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int carry = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;
        while (i >= 0 || j >= 0 || carry > 0) {
            int bitA = (i >= 0) ? (a[i] - '0') : 0;
            int bitB = (j >= 0) ? (b[j] - '0') : 0;

            if (bitA == 0 && bitB == 0) {
                if (carry == 1) {
                    result += '1';
                    carry = 0; 
                } else {
                    result += '0';
                    carry = 0;
                }
            } 
            else if ((bitA == 1 && bitB == 0) || (bitA == 0 && bitB == 1)) {
                if (carry == 1) {
                    result += '0'; 
                    carry = 1;     
                } else {
                    result += '1';
                    carry = 0;
                }
            } 
            else if (bitA == 1 && bitB == 1) {
                if (carry == 1) {
                    result += '1'; 
                    carry = 1;     
                } else {
                    result += '0'; 
                    carry = 1;     
                }
            }
            if (i >= 0) i--;
            if (j >= 0) j--;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};