class Solution {
public:
    int lengthOfLastWord(string s) {
       int wordCount = 0;
int lastPos=0;


for (int i = s.length() - 1; i >= 0; i--)
{
	if (s[i] != ' ')
	{
		lastPos = i;
		break;
	}
}

for (int i = lastPos; s[i] !=' ' && i>=0; i--)
{
	wordCount++;
	if (i == 0)
		break;
}
return wordCount; 
    }
};