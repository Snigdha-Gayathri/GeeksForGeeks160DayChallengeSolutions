#include<limits.h>
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n=prices.size();
        int minPrice=INT_MAX;
        int maxprof=0;
        for(int price:prices)
        {
            minPrice=min(minPrice,price);
            maxprof=max(maxprof, price-minPrice);
        }
        return maxprof;
    }
};