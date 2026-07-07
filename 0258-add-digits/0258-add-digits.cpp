class Solution {
public:
    int addDigits(int num) {
        int temp;
    while((num/10)!=0)
    {
    temp = num;
    num = 0;
    while (temp != 0)
    {
        num = num + temp % 10;
        temp = temp / 10;
    }
    }
    return num;
    }
};