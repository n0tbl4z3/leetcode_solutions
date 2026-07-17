class Solution {
public:
    int numberOfSteps(int num) {
    int stepCount = 0;
    while(num!=0)
    {
        num % 2 == 0 ? num /= 2 : num--;
        stepCount++;
    }
   return stepCount;
    }
};