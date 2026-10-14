class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int curr = 0;
        while(curr < nums.size()){
            int left = 0;
            int right = curr+1;
            int leftSum = 0;
            int rightSum = 0;
            while(left < curr){
                leftSum += nums[left];
                left++;
            }
            while(right < nums.size()){
                rightSum += nums[right];
                right++;
            }
            if(leftSum == rightSum){
                return curr;
            }
            curr++;
        }
        return -1;
    }
};