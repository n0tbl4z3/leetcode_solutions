class Solution {
public:
   int missingMultiple(vector<int>& nums, int k)
{
    unordered_map<int , int> ump;
    for (int i = 0; i < nums.size(); i++)
    {
        ump[nums[i]] = i;
    }
    int multiple = 1;
    bool isFound = true;
    while(isFound==true)
    {
        if(ump.find(multiple*k) != ump.end()){
            isFound = true;
            multiple++;
        }
        else
            isFound = false;
    }
    return multiple * k;
}
};