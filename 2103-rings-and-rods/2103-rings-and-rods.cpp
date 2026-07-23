class Solution {
public:
    int countPoints(string rings) {
        int rods = 0;
bool green = false;
bool red = false;
bool blue = false;
for (int i = 0; i <= 9; i++)
{
	bool green = false;
	bool red = false;
	bool blue = false;
	for (int j = 0; j < rings.length()-1; j=j+2)
	{
		if (rings[j + 1] == i+'0' && rings[j] == 'B')
			blue = true;
		if (rings[j + 1] == i+'0' && rings[j] == 'G')
			green = true;
		if (rings[j + 1] == i+'0' && rings[j] == 'R')
			red = true;
	}
	if (green == true && blue == true && red == true)
		rods++;
}
return rods;
    }
};