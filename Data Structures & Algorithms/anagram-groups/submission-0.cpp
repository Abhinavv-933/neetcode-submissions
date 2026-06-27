class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Map: Key = sorted string, Value = list of original anagrams
        unordered_map<string, vector<string>> anagramMap;

        for (const string& s : strs) {
            // Create a copy of the string to sort
            string key = s;
            
            // Sort the characters to form the canonical key
            // Time: O(K log K) where K is string length
            sort(key.begin(), key.end());
            
            // Add the original string to the group identified by the sorted key
            anagramMap[key].push_back(s);
        }

        // Collect all the groups into a result vector
        vector<vector<string>> result;
        for (auto& pair : anagramMap) {
            result.push_back(pair.second);
        }

        return result;
    }
};
