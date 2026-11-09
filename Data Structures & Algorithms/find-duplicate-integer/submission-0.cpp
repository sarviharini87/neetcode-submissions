class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int x : nums){
            map[x]++;
        }
        for(auto x : map){
            if(x.second > 1){
                return x.first;
            }
        }
    }
};
