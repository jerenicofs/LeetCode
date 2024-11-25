class Solution {
public:
    bool isSubsequence(string s, string t) {
        int cekS = 0;
        for(int i = 0; i < t.size(); i++){
            if(t[i] == s[cekS]) cekS++;
        }

        return cekS != s.size() ? false : true;
    }
};