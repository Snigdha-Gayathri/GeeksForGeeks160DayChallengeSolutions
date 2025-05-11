class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        vector<vector<int>> result;
        int n=arr.size();
        unordered_map<int,vector<int>> valueToIndices;
        for(int i=0;i<n;++i)
        {
            valueToIndices[arr[i]].push_back(i);
        }
        set<vector<int>>uniqueTriplets;
        
        for(int i=0;i<n-2;++i)
        {
            for(int j=i+1;j<n-1;++j)
            {
                int target=-(arr[i]+arr[j]);
                if(valueToIndices.count(target))
                {
                    for(int k:valueToIndices[target])
                    {
                        if(k>j)
                        {
                            vector<int> triplet={i,j,k};
                            uniqueTriplets.insert(triplet);
                        }
                    }
                }
            }
            
        }
        for(auto &triplet: uniqueTriplets)
        {
            result.push_back(triplet);
        }
        return result;
        
    }
};