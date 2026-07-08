class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int length = nums.size(); 
        
        for (int i = 0; i <= length; i++) 
        {
            bool found = false;
            for (int j = 0; j < length; j++) 
            {
                if (i == nums[j]) 
                {
                    found = true;
                    break; 
                }
            }
            
            if (!found) 
            {
                return i;
            }
        }
        
        return -1;
    } 
};