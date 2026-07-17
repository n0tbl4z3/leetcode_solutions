class Solution {
public:
    string defangIPaddr(string address) {
         int count = 0;
    for (int i = 0; i < address.length(); i++)
    {
        if(address[i]=='.')
        {
            count++;
        }
    }
    string defanged(address.length()+count*2, ' ');
    int j = 0;
    int k = 0;
    while(j<address.length() && k<defanged.length())
    {
        if(address[j]=='.')
        {
            defanged[k] = '[';
            k++;
            defanged[k] = '.';
            k++;
            defanged[k] = ']';
            k++;
            j++;
        }
        else
        {
            defanged[k] = address[j];
            k++;
            j++;
        }
            
       
    }
   return defanged;
}
    
};