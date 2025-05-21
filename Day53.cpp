class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        if(n<2) return {};
        sort(arr.begin(),arr.end());
        int left=0,right=n-1;
        int closestDiff=INT_MAX;
        vector<int> result;
        int maxAbsDiff=-1;
        while(left<right)
        {
            int sum=arr[left]+arr[right];
            int diff=abs(sum-target);
            if(diff<closestDiff)
            {
                closestDiff=diff;
                result={arr[left],arr[right]};
                maxAbsDiff=abs(arr[left]-arr[right]);
            }
            else if(diff=closestDiff)
            {
                int absDiff=abs(arr[left]-arr[right]);
                if(absDiff>maxAbsDiff)
                {
                    result={arr[left],arr[right]};
                    maxAbsDiff=absDiff;
                }
            }
            if(sum<target) left++;
            else right--;
        }
        return result;
        
    }
};