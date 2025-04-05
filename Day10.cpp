class Solution {
    public:
      int maxSubarraySum(vector<int> &arr) {
          // Your code here
          int max_ending_here=0;
          int max_so_far=INT_MIN;
          for(int num:arr)
          {
              max_ending_here=max_ending_here+num;
              if(max_so_far<max_ending_here)
              {
                  max_so_far=max_ending_here;
              }
              if(max_ending_here<0)
              {
                  max_ending_here=0;
              }
          }
          return max_so_far;
      }
  };