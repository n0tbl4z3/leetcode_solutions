class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> intersection;
map <int, bool> track;
for (int i = 0; i < nums1.size(); i++)
{
	if (track.find(nums1[i]) == track.end())
		track[nums1[i]] = 0;
}
for (int j = 0; j < nums2.size(); j++)
{
	if (track.find(nums2[j]) != track.end() && track[nums2[j]] == 0)
	{
		intersection.push_back(nums2[j]);
		track[nums2[j]] = 1;
	}
		
}

return intersection;
    }
};