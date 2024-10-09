class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string s1 = strs[0];
        string s2 = strs[strs.size() - 1];
        string res = "";
        for(int i = 0; i < min(s1.size(), s2.size()) ; i++){
            if(s1[i] != s2[i]) return res;
            res += s1[i];
        }
        return res;
    }
};