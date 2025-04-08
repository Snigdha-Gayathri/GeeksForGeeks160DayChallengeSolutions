#include<limits.h>
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int kadane(const vector<int>&arr)
    {
        int max_ending_here=arr[0];
        int max_so_far=arr[0];
        for(int i=1;i<arr.size();++i)
        {
          max_ending_here=max(arr[i],max_ending_here+arr[i]);
          max_so_far=max(max_so_far,max_ending_here);
            
        }
        return max_so_far;
    }
    
    int circularSubarraySum(vector<int> &arr) {
        int n=arr.size();
        int max_kadane=kadane(arr);
        int total_sum=0;
        vector<int>inverted_arr(n);
        for(int i=0;i<n;i++)
        {
            total_sum+=arr[i];
            inverted_arr[i]=-arr[i];
        }
        int max_inverted_kadane=kadane(inverted_arr);
        int max_circular=total_sum+max_inverted_kadane;
        
        if(max_circular==0)
        {
            return max_kadane;
        }
        return max(max_kadane, max_circular);

        // your code here
        
        
    }
};