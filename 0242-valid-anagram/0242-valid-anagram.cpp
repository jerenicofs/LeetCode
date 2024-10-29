class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, int> m;
        int n = max(s.size(), t.size());

        for(int i = 0; i < n; i++){
            m[s[i]]++;
            m[t[i]]--;
        }
        for(auto &pair : m){
            if(pair.second != 0) return false;
        }
        return true;
    }
};