#include<vector>
class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        d=d%n;
        if(d==0) return;
        std::reverse(arr.begin(),arr.begin()+d);
        std::reverse(arr.begin()+d, arr.end());
        std::reverse(arr.begin(),arr.end());
        
    }
};