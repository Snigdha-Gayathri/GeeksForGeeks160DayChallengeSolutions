class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> res(n,1);
        vector<int> prefix(n,1),suffix(n,1);
        for(int i=1;i<n;++i)
        {
            prefix[i]=prefix[i-1]*arr[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            suffix[i]=suffix[i+1]*arr[i+1];
        }
        for(int i=0;i<n;++i)
        {
            res[i]=prefix[i]*suffix[i];
        }
        return res;
        
    }
};
