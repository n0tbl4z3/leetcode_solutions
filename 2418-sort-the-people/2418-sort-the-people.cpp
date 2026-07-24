class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        	int largestNum;
	string largestName;
	for (int i = 0; i < heights.size(); i++)
	{
		largestNum= heights[i];
		largestName = names[i];
		for (int j = i; j < heights.size(); j++)
		{
			if (heights[j] > heights[i])
			{
				largestNum = heights[j];
				largestName = names[j];
				heights[j] = heights[i];
				names[j] = names[i];
				heights[i] = largestNum;
				names[i] = largestName;
			}
				
		}
		
		

	}
	return names;
    }
};