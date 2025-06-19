class Solution {
  public:
    void backtrack(string &s, vector<bool> &used, string &curr, set<string> & result)
    {
        if(curr.size()==s.size())
        
        {
            result.insert(curr);
            return;
        }
        for(int i =0;i<s.size();i++)
        {
            if(used[i]) continue;
            
            used[i]=true;
            curr.push_back(s[i]);
            
            backtrack(s,used,curr,result);
            
            curr.pop_back();
            used[i]=false;
        }
    }
    vector<string> findPermutation(string &s) {
        // Code here there
        set<string> uniquePermutations;
        
        vector<bool> used(s.size(),false);
        string curr;
        
        backtrack(s,used,curr,uniquePermutations);
        return vector<string>(uniquePermutations.begin(),uniquePermutations.end());
    }
};
