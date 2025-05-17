class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int> prefixSumCount;
        int count=0;
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(sum==k) count++;
            if(prefixSumCount.find(sum-k)!=prefixSumCount.end())
            {
                count+=prefixSumCount[sum-k];
            }
            prefixSumCount[sum]++
            ;
        }
        return count;
        
    }
};