class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> res;
        for(int x : nums){
            mp[x]++;
        }
        while(res.size() < k){
            int count = 0;
            int element = 0;
            for(auto x : mp){
                if(x.second > count){
                    count = x.second;
                    element = x.first;
                }
            }
            res.push_back(element);
            mp.erase(element);
        }
        return res;
    }
};