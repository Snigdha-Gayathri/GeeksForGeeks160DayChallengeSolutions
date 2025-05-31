class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        unordered_map<int,int> prefixMap;
        int maxLength=0;
        int prefixSum=0;
        prefixMap[0]=-1;
        for(int i=0;i<arr.size();++i)
        {
           prefixSum+=(arr[i]==0)?-1:1;
            if(prefixMap.find(prefixSum)!=prefixMap.end())
            {
                maxLength=max(maxLength,i-prefixMap[prefixSum]);
            }
            else
            {
                prefixMap[prefixSum]=i;
            }
        }
        return maxLength;
        
        
    }
};