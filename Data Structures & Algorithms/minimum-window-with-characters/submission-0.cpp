// first check if the element in s is present in t 
// if it is not present in t then no need to check
// if it does then check the frequency
class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        string res="";
        for(int x : t){
            map1[x]++;
        }
        int l=0;
        int r=l;
        int formed = 0;
        int required = map1.size();
        int minimum = INT_MAX;
        int storeLeft = -1;
        int storeRight = -1;
        while(r < s.size()){
            map2[s[r]]++;
            if(map1.find(s[r]) != map1.end()){
                if(map2[s[r]] == map1[s[r]]){
                    formed++;
                }
            }
            while(formed == required){
                if(minimum > r-l+1){
                    minimum = r-l+1;
                    storeLeft = l;
                    storeRight = r;
                }
                if(map1.find(s[l]) != map1.end() && map2[s[l]] == map1[s[l]]){
                    formed--;
                }
                map2[s[l]]--;
                l++;
            }
            r++;
        }
        if(storeLeft == -1){
            return "";
        }
        int i=storeLeft;
        while(i <= storeRight){
            res.push_back(s[i]);
            i++;
        }
        return res;
    }
};