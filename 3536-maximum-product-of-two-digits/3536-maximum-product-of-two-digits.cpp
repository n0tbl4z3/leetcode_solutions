class Solution {
public:
    int maxProduct(int n) { 
        vector<int> vec;
        int maximum = 0;
        
        while (n != 0) {
            vec.push_back(n % 10);
            n = n / 10;
        }
        
        for (int i = 0; i < vec.size(); i++) {
            for (int j = 0; j < vec.size(); j++) {
                if (i != j) {
                    if (vec[i] * vec[j] > maximum)
                        maximum = vec[i] * vec[j];
                }
            }
        }
        
        return maximum;
    } 
};