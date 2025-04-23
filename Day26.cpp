class Solution {
    public:
      int minRemoval(vector<vector<int>> &intervals) {
          // code here
          sort(intervals.begin(),intervals.end(),[](vector<int>&a, vector<int>&b)
          {
              return a[1]<b[1];
          });
          int count=0;
          int lastEnd=INT_MIN;
          for(const auto &interval: intervals)
          {
              if(interval[0]<lastEnd)
              {
                  count++;
              }
              else
              {
                  lastEnd=interval[1];
              }
          }
          return count;
      }
  };
  