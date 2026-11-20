class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> pair;
        int n = position.size();
        for(int i=0; i<n; i++){
            pair.push_back({position[i], speed[i]});
        }
        sort(pair.rbegin(), pair.rend());

        vector<double> stack;

        for(auto &x : pair){
            stack.push_back((double)(target - x.first) / x.second);
            if(stack.size() >= 2 && stack.back() <= stack[stack.size() - 2]){
                stack.pop_back();
            }
        }
        return stack.size();
    }
};
