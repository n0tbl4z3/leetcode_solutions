class Solution {
public:
    int titleToNumber(string columnTitle) {
     int length = columnTitle.length() - 1;
     int long long fac = 1;
     int alpha = 1;
     long long int columnNo = 0;
    for (length; length >= 0; length--){
        alpha = 1;
        for (char ch = 'A'; ch <  columnTitle[length]; ch++){
            alpha++;
        }
        columnNo = columnNo + alpha * fac;
        fac *= 26;}
    return columnNo;
    }
};