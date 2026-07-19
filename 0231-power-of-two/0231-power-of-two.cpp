class Solution {
public:
    bool isPowerOfTwo(int n) {
       long long int fac = 1;
    if(n==1)
        return true;
    if(n<2)
        return false;
    while(fac<n)
    {
        fac = fac * 2;
        if(fac==n)
            return true;
    }
    return false;
    }
};