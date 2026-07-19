class Solution {
public:
    bool isPowerOfFour(int n) {
       long long int fac = 1;
    if(n==1)
        return true;
    if(n<4)
        return false;
    while(fac<n)
    {
        fac = fac * 4;
        if(fac==n)
            return true;
    }
    return false;
    }
};