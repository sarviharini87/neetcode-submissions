class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> sMap;
        unordered_map<int, int> tMap;
        if(s.size() != t.size()){
            return false;
        }
        for(int i=0; i<s.size(); i++){
            sMap[s[i]]++;
            tMap[t[i]]++;
        }
        if(sMap == tMap){
            return true;
        }
        return false;
    }
};
