class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
vector <int> result;
unordered_map <int, int> kmap;
for (int i = 0; i < nums2.size(); i++)
{
	bool found = false;
	int value = -1;
	int j = i + 1;
	while (found == false && j < nums2.size())
	{
		if (nums2[j] > nums2[i])
		{
			found = true;
			value = nums2[j];
		}
		
		j++;
	}
	kmap.insert({nums2[i], value});
}
for (int k = 0; k < nums1.size(); k++)
{
	result.push_back(kmap[nums1[k]]);
}


return result;

    }
};