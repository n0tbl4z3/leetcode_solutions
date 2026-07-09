class Solution {
public:
    vector<int> countBits(int n) {
    int bitCount = 0;
    vector<int> v;
    for (int i = 0; i <= n; i++)
    {
        bitCount = 0;
        int k = i;
        while(k!=0)
        {
            if(k%2==1)
            {
                bitCount++;
            }
            k /= 2;
        }
        v.push_back(bitCount);
    }
    return v;
    }
};