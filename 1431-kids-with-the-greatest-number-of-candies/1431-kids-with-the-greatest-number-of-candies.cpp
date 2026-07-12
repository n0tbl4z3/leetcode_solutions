class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         vector<bool> result;
    int largest = candies[0];
    for (int i = 0; i < candies.size(); i++)
    {
        if(candies[i]>largest)
        {
            largest = candies[i];
        }
    }
    for (int j = 0; j < candies.size(); j++)
    {
        candies[j] + extraCandies >= largest ? result.push_back(true) : result.push_back(false);
    }
    return result;
    }
};