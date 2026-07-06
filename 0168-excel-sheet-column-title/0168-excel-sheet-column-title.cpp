class Solution {
public:
    string convertToTitle(int columnNumber) {
     string s;
    int rem;
    while(columnNumber>26)
    {
        rem = columnNumber % 26;
        columnNumber = columnNumber / 26;
        if(rem==0)
        {
            rem = 26;
            columnNumber = columnNumber - 1;
        }
        char alpha = 'A';
        for (int i = 1; i < rem; i = i + 1)
        {
            alpha = alpha + 1;
        }
        s.push_back(alpha);
        
    }
    char alpha = 'A';
    if(columnNumber!=0)
    {
        for (int j = 1; j < columnNumber; j = j + 1)
        {
            alpha = alpha + 1;
        }
        s.push_back(alpha);
    }
    reverse(s.begin(), s.end());
    return s;
    }
};