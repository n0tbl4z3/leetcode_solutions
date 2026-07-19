class Solution {
public:
    bool isPowerOfThree(int n) {
     long long int fac = 1;
    if(n==1)
        return true;
    if(n<3)
        return false;
    while(fac<n)
    {
        fac = fac * 3;
        if(fac==n)
            return true;
    }
    return false;
    }
};