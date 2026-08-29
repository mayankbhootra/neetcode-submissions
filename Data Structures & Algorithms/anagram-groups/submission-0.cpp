class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> results;
        // unordered_map<string,bool> hash_mp;
        unordered_map<string,vector<string>> final_mp;
        for(string str:strs)
        {
            string temp=str;
            sort(temp.begin(),temp.end());
            final_mp[temp].push_back(str);
        }
        for(auto key:final_mp)
        {
            results.push_back(key.second);
        }
        return results;
    }
};
