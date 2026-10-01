class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<pair<int, int>> res;
        vector<int> ans;
        for(int x : nums){
            mp[x]++;
        }
        for(auto x : mp){
            res.push_back(x);
        }
        sort(res.begin(), res.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        for(int i=0; i<k; i++){
            ans.push_back(res[i].first);
        }
        return ans;
    }
};