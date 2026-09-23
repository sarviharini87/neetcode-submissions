class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> a2;

        for (auto s: strs)
        {
            auto cpy =s ;
            sort (cpy.begin(), cpy.end());
            a2[cpy].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto it: a2)
        {
            ans.push_back(std::move(it.second));
        }

        return ans;
    }
};
