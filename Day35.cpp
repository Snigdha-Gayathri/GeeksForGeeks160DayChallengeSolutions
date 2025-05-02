class Solution {
    public:
      int kthMissing(vector<int> &arr, int k) {
          // Your code goes here
          int missingCount=0;
          int prev=0;
          for(int i=0;i<arr.size();++i)
          
          {
              int gap=arr[i]-prev-1;
              if(missingCount+gap>=k)
              {
                  return prev+(k-missingCount);
              }
              missingCount+=gap;
              prev=arr[i];
          }
          return prev+(k-missingCount);
      }
  };