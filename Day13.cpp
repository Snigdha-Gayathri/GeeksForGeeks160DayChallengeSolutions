class Solution {
    public:
      // Function to find the smallest positive number missing from the array.
      int missingNumber(vector<int> &arr) {
          // Your code here
          int n=arr.size();
          int j=0;
          for(int i=0;i<n;i++)
          {
              if(arr[i]<=0 || arr[i]>n)
              {
                  arr[i]=n+1;
              }
          }
          for(int i=0;i<n;i++)
          {
              int num=abs(arr[i]);
              if(num>=1 && num<=n)
              {
                  if(arr[num-1]>0)
                  {
                      arr[num-1]=-arr[num-1];
                  }
              }
          }
          for(int i=0;i<n;i++)
          {
              if(arr[i]>0)
              {
                  return i+1;
              }
          }
          return n+1;
          
      }
  };