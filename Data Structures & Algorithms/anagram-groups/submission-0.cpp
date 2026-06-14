class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>map;
        for(string original:strs){
           string key=original;
            sort(key.begin(),key.end());
            map[key].push_back(original);
        }

        vector<vector<string>>ans;
        for(auto &p:map)
        {ans.push_back(p.second);}
        return ans;
    }
};
