class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPile = *max_element(piles.begin(), piles.end());
        int low = 1;
        int high = maxPile;
        int ans = 0;
        while(low <= high){
            int mid = low + (high-low) / 2;
            long long totalHrs = 0;
            for(int i=0; i<piles.size(); i++){
                totalHrs += (piles[i] + mid - 1)/mid;
            }
            if(totalHrs <= h){
                ans = mid;
                high = mid-1;
            }else if(totalHrs > h){
                low = mid + 1;
            }
        }
        return ans;
    }
};