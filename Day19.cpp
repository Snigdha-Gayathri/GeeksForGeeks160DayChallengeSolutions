class Solution {
    public:
      int minChar(string& s) {
          // Write your code here
          int n=s.size();
          string rev=s;
          reverse(rev.begin(),rev.end());
          string combined=s+'$'+rev;
          int m=combined.size();
          vector<int>lps(m,0);
          for(int i=1;i<m;i++)
          {
              int len=lps[i-1];
              while(len>0 && combined[i]!=combined[len])
              {
                  len=lps[len-1];
              }
              if(combined[i]==combined[len])
              {
                  len++;
              }
              lps[i]=len;
          }
          return n-lps.back();
         
          
      }
  };