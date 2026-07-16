class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixGcd;
        int maxNum = 0;
        
        
        for (int i = 0; i < n; i++) {
            maxNum = max(maxNum, nums[i]);
            prefixGcd.push_back(std::gcd(maxNum, nums[i])); 
        }
        
        
        sort(prefixGcd.begin(), prefixGcd.end());
        
        
        long long sumGCD = 0; 
        int k = 0, l = n - 1;
        while (k < l) {
            sumGCD += gcd(prefixGcd[k], prefixGcd[l]);
            k++;
            l--;
        }
        
        return sumGCD;
    }
};