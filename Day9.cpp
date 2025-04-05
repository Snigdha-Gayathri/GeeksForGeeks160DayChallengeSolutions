class Solution {
    public:
      int getMinDiff(vector<int> &arr, int k) {
          // code here
          int n=arr.size();
          if(n==1){
          return 0;
          }
          sort(arr.begin(),arr.end());
          int min_val=arr[0];
          int max_val=arr[n-1];
          int result=max_val-min_val;
          for(int i=1;i<n;i++)
          {
              int subtract=arr[i]-k;
              int add=arr[i-1]+k;
              
              int possible_min=min(min_val+k, subtract);
              int possible_max=max(max_val-k, add);
              
              if(possible_min<0)
              {
                  continue;
              }
              result=min(result,possible_max-possible_min);
          }
          return result;
      }
  };