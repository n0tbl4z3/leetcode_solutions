class Solution {
public:
    int findLucky(vector<int>& arr) {
        	int luckyNumber=-1;
	int frequency = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		frequency = 0;
		for (int j = 0; j < arr.size(); j++)
		{
			if (arr[i] == arr[j])
				frequency++;
		}
		if (arr[i] == frequency && arr[i] > luckyNumber)
			luckyNumber = arr[i];
	}
	return luckyNumber;
    }
};