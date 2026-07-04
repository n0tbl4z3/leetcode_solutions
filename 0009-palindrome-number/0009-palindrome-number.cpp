class Solution {
public:
    bool isPalindrome(int x) {
  if(x>=0){
bool isPalindrome = true;
long long int fac = 0;
int num = x;
while (num != 0) {
	fac = fac * 10;
	fac = fac + num% 10;
	num = num / 10;
}
if(fac==x){
    return true;
}
return false;

  }  
  return false;

    }
};