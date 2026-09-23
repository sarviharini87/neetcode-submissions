class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(int i=0; i<strs.size(); i++){
            string original = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(original);
        }
        vector<vector<string>> ans;
        for(auto &pair : mp){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
