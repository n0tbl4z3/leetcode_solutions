class Solution {
public:
    int calPoints(vector<string>& operations) {
    vector <int>scoreTracker;
int sum = 0;
for (int i = 0; i < operations.size(); i++)
{
	if (operations[i] == "+")
	{
		scoreTracker.push_back((scoreTracker[scoreTracker.size()-1])+(scoreTracker[scoreTracker.size()-2]));
	}
	else if (operations[i] == "D")
	{
		scoreTracker.push_back((scoreTracker[scoreTracker.size() - 1])*2);
	}
	else if (operations[i] == "C")
	{
		scoreTracker.erase(scoreTracker.begin() + scoreTracker.size() - 1);
	}
	else
	{
		scoreTracker.push_back(stoi(operations[i]));
	}
}
for (auto p : scoreTracker)
{
	sum = sum + p;
}
return sum ;
    }
};