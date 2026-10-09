class Solution {
public:

    string encode(vector<string>& strs) {
        int len = 0;
        string res = "";
        for(int i=0; i<strs.size(); i++){
            int numLen = strs[i].size();
            string len = to_string(numLen);
            res += len;
            res.push_back('#');
            for(int j=0; j<strs[i].size(); j++){
                res.push_back(strs[i][j]);
            }
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> lst;
        int i=0;
        while(i < s.size()){
            int j=i;
            while(j < s.size() && s[j] != '#'){
                j++;
            }
            string len = s.substr(i, j-i);
            int numLen = 0;
            for (int k = i; k < j; k++) {
                numLen = numLen * 10 + (s[k] - '0');
            }
            string word = s.substr(j+1, numLen);
            lst.push_back(word);
            i = j + 1 + numLen;
        }
        return lst;
    }
};
