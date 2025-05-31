class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<long long, int> prefixSumMap;
        long long sum=0;
        int maxLength=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(sum==k)
            {
                maxLength=i+1;
            }
            if(prefixSumMap.find(sum-k)!=prefixSumMap.end())
            {
                maxLength=max(maxLength, i-prefixSumMap[sum-k]);
            }
            if(prefixSumMap.find(sum)==prefixSumMap.end())
            {
                prefixSumMap[sum]=i;
            }
        }
        return maxLength;
        
        
    }
};