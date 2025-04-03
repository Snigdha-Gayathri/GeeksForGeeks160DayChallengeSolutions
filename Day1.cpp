#include<limits.h>
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        int largest=arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]>largest)
            {
                largest=arr[i];
            }
        }
        int slargest=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>slargest && arr[i]!=largest)
            {
                slargest=arr[i];
            }
        }
       return slargest;
    }
};