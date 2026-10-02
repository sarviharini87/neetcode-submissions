class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> res;
        for(int i : nums){
            mp[i]++;
        }
        while(res.size() < k){
            int maxFreq = 0;
            int element = 0;
            for(auto x : mp){
                if(x.second > maxFreq){
                    maxFreq = x.second;
                    element = x.first;
                }
            }
            res.push_back(element);
            mp.erase(element);
        }
        return res;
    }
};
