class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int n=s.length();
        int maxLen=0;
        unordered_map<char,int> lastSeen;
        int start=0;
        for(int end=0;end<n;++end)
        {
            char currentChar=s[end];
            if(lastSeen.find(currentChar)!=lastSeen.end() && lastSeen[currentChar]>=start)
            {
                start=lastSeen[currentChar]+1;
                
            }
            lastSeen[currentChar]=end;
            maxLen=max(maxLen,end-start+1);
        }
        return maxLen;
        
    }
};