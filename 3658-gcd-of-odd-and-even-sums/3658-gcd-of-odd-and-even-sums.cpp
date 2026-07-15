class Solution {
public:
    int gcdOfOddEvenSums(int n) {
     int oddSum=n*n;
    int evenSum=n*(n+1);
    int rem=1, quotient, divisor, dividend;
    divisor = oddSum;
    dividend = evenSum;
    if(divisor==0)
    {
        return 0;
    }
    while(rem!=0)
    {
        quotient = dividend / divisor;
        rem = dividend % divisor;
        dividend = divisor;
        divisor = rem;
    }
    return dividend;
    }
};