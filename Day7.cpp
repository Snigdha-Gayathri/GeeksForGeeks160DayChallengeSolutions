class Solution {
    public:
      int maximumProfit(vector<int> &prices) {
          // code here
          int n=prices.size();
          if(n<=1)
          {
              return {};
          }
          int maxProfit=0;
          for(int i=1;i<n;i++)
          {
              if(prices[i]>prices[i-1])
              {
                  maxProfit+=prices[i]-prices[i-1];
              }
          }
          return maxProfit;
          
      }
  };