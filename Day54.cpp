class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int n=arr.size();
        int left=0;
        
        int right=n-1;
        long long count=0;
        while(left<right)
        {
            int sum=arr[left]+arr[right];
            if(sum==target)
            {
                if(arr[left]==arr[right])
                {
                    long long total=right-left+1;
                    count+=(total*(total-1))/2;
                    break;
                }
                    int leftCount=1;
                    while(left+1<right && arr[left]==arr[left+1])
                    {
                        leftCount++;
                        left++;
                    }
                    int  rightCount=1;
                    while(right-1>left && arr[right]==arr[right-1])
                    {
                        rightCount++;
                        right--;
                    }
                    
                    
                        count+=(long long) leftCount*rightCount;
                        left++;
                        right--;
                        
                    
            }
                
                    
                
                    
                
                
                
            
            else if(sum<target) left++;
            else right--;
        }
        return (int) count;
    }
};