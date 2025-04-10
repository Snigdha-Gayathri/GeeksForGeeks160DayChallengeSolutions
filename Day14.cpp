#include<climits>
#include<cstring>
#include<string>
class Solution {
  public:
    int myAtoi(char *s) {
        // Your code here
        int n=strlen(s);
        if(s== nullptr || *s=='\0')
        {
            return 0;
        }
        int start=0;
        int sign=1;
        int i=0;
        while(i<n && isspace(s[i]))
        {
            i++;
        }
        if(i<n && (s[i]=='-' || s[i]=='+'))
        {
            sign=(s[i]=='-') ? -1:1;
            i++;
        }
        long long ans=0;
        while(i<n && isdigit(s[i]))
        {
            int digit=s[i]-'0';
            ans=ans*10+digit;
            if(ans>INT_MAX)
            {
                return (sign==1)?INT_MAX: INT_MIN;
            }
            i++;
        
        }
        return (int)(sign*ans);
    }    
};