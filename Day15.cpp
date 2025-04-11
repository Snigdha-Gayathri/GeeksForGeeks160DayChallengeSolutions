#include<iostream>
#include<algorithm>
// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        
        int i=s1.size()-1;
        int j=s2.size()-1;
        int carry=0;
        string result="";
        
        while(i>=0 || j>=0 || carry)
        {
            int sum=carry;
            if(i>=0)
            {
                sum+=(s1[i]-'0');
                i--;
            }
            if(j>=0)
            {
                sum+=(s2[j]-'0');
                j--;
            }
            result+=to_string(sum%2);
            carry=sum/2;
        }
        reverse(result.begin(),result.end());
        
        int k=0;
        while(k<result.length()-1 && result[k]=='0')
        {
            k++;
            
        }
        return result.substr(k);
            
    }
};