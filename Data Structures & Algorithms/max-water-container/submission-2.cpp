class Solution {
public:
    int maxArea(vector<int>& height) {
        int waterLevel = 0;
        int left = 0;
        int right = height.size()-1;
        while(left < right){
            int minVal = min(height[left], height[right]);
            int indDiff = right - left;
            waterLevel = max(waterLevel, minVal * indDiff);
            if(height[left] == minVal){
                left++;
            }else{
                right--;
            }
        }
        return waterLevel;
    }
};