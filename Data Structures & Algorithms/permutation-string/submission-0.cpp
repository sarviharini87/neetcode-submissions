class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()){
            return false;
        }else{
            unordered_map<char, int> map1;
            unordered_map<char, int> map2;
            for(int x : s1){
                map1[x]++;
            }
            int l=0;
            int r=l;
            while(r < s1.size()){
                map2[s2[r]]++;
                r++;
            }
            if(map1 == map2){
                return true;
            }else{
                while(r < s2.size()){
                    map2[s2[r]]++;
                    map2[s2[l]]--;
                    if(map2[s2[l]] == 0){
                        map2.erase(s2[l]);
                    }
                    l++;
                    r++;
                    if(map1 == map2){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
