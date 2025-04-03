#include<algorithm>
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        std::unordered_map<int,int>counts;
        int size=arr.size();
        std::vector<int>result;
        for(int num:arr)
        {
            counts[num]++;
        }
        for(auto const& pair:counts)
        {
            if(pair.second>size/3)
            {
                result.push_back(pair.first);
            }
        }
        std::sort(result.begin(),result.end());
        return result;
    }
    
};