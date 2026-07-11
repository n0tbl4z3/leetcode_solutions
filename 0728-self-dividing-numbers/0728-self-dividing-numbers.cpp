class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
         int  copy;
    bool isSelfDividing = true;
    vector<int> nums;
    
    for (int i = left; i <= right; i++)
    {
        isSelfDividing = true;
        copy = i;
        
        while (copy != 0)
        {
            int digit = copy % 10;
            
            if (digit == 0 || i % digit != 0)
            {
                isSelfDividing = false;
                break; 
            }
            copy = copy / 10;
        }
        
        if (isSelfDividing == true)
        {
            nums.push_back(i);
        }
    }

    return nums;
    }
};