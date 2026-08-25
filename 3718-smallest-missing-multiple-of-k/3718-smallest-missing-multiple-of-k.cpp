class Solution {
public:
   int missingMultiple(vector<int>& nums, int k)
{
    int multiple = 1;
    bool found = false;
    while(1)
    {
        found = false;
        int check = multiple * k;
        for (int i = 0; i < nums.size(); i++)
        {
            if(check== nums[i]){
                found = true;
                break;
            }
        }
        if(found == false)
        {
            return check;
        }
        multiple++;
    }
}
};