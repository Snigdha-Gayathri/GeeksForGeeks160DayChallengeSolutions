class Solution {
    public:
      bool isAnagram(string s1, string s2) {
          if (s1.length() != s2.length()) return false;
  
          int count[26] = {0};
  
          // Count frequency from s1 and decrease for s2
          for (int i = 0; i < s1.length(); ++i) {
              count[s1[i] - 'a']++;
              count[s2[i] - 'a']--;
          }
  
          // If all counts are zero, it's an anagram
          for (int i = 0; i < 26; ++i) {
              if (count[i] != 0)
                  return false;
          }
  
          return true;
      }
  };