class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> seen;

        // Loop through each number in the array
        for (int num : nums) {

            
            if (seen.find(num) != seen.end()) {
                return true; 
            }

           
            seen[num] = true;
        }

        
        return false;
    }
};