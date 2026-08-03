class Solution {
public:
    int findComplement(int num) {
         long long int   fac = 1;
 long long int newNum = 0;
 while (num != 0)
 {
     if (num % 2 == 0)
         newNum = newNum +fac* 1;
     num = num / 2;
     fac = fac * 2;
 }
    
  return newNum;
    }
};