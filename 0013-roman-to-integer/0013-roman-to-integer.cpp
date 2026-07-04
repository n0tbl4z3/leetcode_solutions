class Solution {
public:
    int romanToInt(string s) {
int intVal = 0;
int length = s.length() - 1;
for (length;length>=0;length=length-1)
{
	if (s[length] == 'I')
	{
		intVal += 1;
	}
	if (s[length] == 'V')
	{
		intVal += 5;
		if (length!=0&&s[length - 1] == 'I')
		{
			intVal -= 1;
			length -= 1;
		}
	}
	if (s[length] == 'X')
	{
		intVal += 10;
		if (length != 0 && s[length - 1] == 'I')
		{
			intVal -= 1;
			length -= 1;
		}
	}
	if (s[length] == 'L')
	{
		intVal += 50;
		if (length != 0 && s[length - 1] == 'X')
		{
			intVal -= 10;
			length -= 1;
		}
	}
	if (s[length] == 'C')
	{
		intVal += 100;
		if (length != 0 && s[length - 1] == 'X')
		{
			intVal -= 10;
			length -= 1;
		}
	}
	if (s[length] == 'D')
	{
		intVal += 500;
		if (length != 0 && s[length - 1] == 'C')
		{
			intVal -= 100;
			length -= 1;
		}
	}
	if (s[length] == 'M')
	{
		intVal += 1000;
		if (length != 0 && s[length - 1] == 'C')
		{
			intVal -= 100;
			length -= 1;
		}
	}
}

return intVal;

    }
};