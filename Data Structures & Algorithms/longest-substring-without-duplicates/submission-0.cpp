class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int left = 0;
        int right = left;
        int maxLength = 0;
        while(right < s.size()){
            if(set.find(s[right]) == set.end()){
                set.insert(s[right]);
                int length = right - left + 1;
                maxLength = max(maxLength, length);
                right++;
            }else{
                while(set.find(s[right]) != set.end()){
                    set.erase(s[left]);
                    left++;
                }
            }
        }
        return maxLength;
    }
};
