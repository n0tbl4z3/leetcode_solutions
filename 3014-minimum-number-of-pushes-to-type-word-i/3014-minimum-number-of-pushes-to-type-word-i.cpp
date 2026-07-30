class Solution {
public:
    int minimumPushes(string word) {
       int eachCount=0;
int pushes=0;
int i = 0;
while (i < word.length())
{
	if (i % 8 == 0)
	{
		eachCount++;
	}
	pushes = pushes + eachCount;
	i++;
}
return pushes; 
    }
};