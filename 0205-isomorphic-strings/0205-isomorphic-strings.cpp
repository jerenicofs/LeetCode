class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, int> maps;
        map<char, int> mapt;

        int n = s.size();
        for(int i = 0; i < n; i++){
            if(maps.find(s[i]) == maps.end()) maps[s[i]] = i;
            if(mapt.find(t[i]) == mapt.end()) mapt[t[i]] = i;
            if(maps[s[i]] != mapt[t[i]]) return false;
        }
        return true;
    }
};