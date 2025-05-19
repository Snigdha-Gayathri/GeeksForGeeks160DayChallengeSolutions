class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int> freq;
        int xorSum=0;
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            xorSum ^=arr[i];
            
            if(xorSum==k) count++;
            
            if(freq.find(xorSum^k)!=freq.end())
            {
                count+=freq[xorSum^k];
            }
            freq[xorSum]++;
        }
        return count;
        
    }
};