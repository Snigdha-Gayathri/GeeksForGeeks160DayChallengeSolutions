class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int n=arr.size();
        int totalSum=0;
        for(int i=0;i<n;++i)
        {
            totalSum+=arr[i];
        }
        int leftSum=0;
        for(int i=0;i<n;++i)
        {
            if(leftSum==totalSum-leftSum-arr[i])
            {
                return i;
            }
            leftSum+=arr[i];
        }
        return -1;
        
    }
};