class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        unordered_map<string, vector<string>> anagramGroups;
        
        vector<string>order;
        for(const string& word: arr)
        
        {
            string sortedWord=word;
            sort(sortedWord.begin(),sortedWord.end());
            if(anagramGroups.find(sortedWord)==anagramGroups.end())
            {
                order.push_back(sortedWord);
            }
            anagramGroups[sortedWord].push_back(word);
        }
        
        vector<vector<string>>result;
        for(const string& key: order)
        {
            result.push_back(anagramGroups[key]);
        }
        return result;
        
    }
};