class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> result;
        
        for(int r=0; r<nums.size(); r++){
            while(!dq.empty() && nums[dq.back()] < nums[r]){
                dq.pop_back();
            }
            dq.push_back(r);

            if(dq.front() < r-k+1){
                dq.pop_front();
            }

            if(r >= k-1){
                result.push_back(nums[dq.front()]);
            }
        }
        return result;
    }
};