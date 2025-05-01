class Solution {
    public:
      bool canPlaceCows(vector<int> & stalls, int k, int minDist)
      {
          int count=1;
          int lastPos=stalls[0];
          for(int i=1;i<stalls.size();i++)
          {
              if(stalls[i]-lastPos>=minDist)
              {
                  count++;
                  lastPos=stalls[i];
              }
              if(count>=k) return true;
          }
          return false;
      }
  
      int aggressiveCows(vector<int> &stalls, int k) {
  
          // Write your code here
          sort(stalls.begin(),stalls.end());
          int low=1;
          int high=stalls.back()-stalls.front();
          int result=0;
          while(low<=high)
          {
              int mid=low+(high-low)/2;
              if(canPlaceCows(stalls,k,mid))
              {
                  result=mid;
                  low=mid+1;
              }
              else
              {
                  high=mid-1;
              }
          }
          return result;
          
      }
  };