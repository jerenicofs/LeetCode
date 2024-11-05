class Solution {
public:
    int minChanges(string s) {
        if(s.length() <= 2 && s[0] != s[1]) return 1;
        if(s.length() <= 2 && s[0] == s[1]) return 0;

        int ct_z = 0, ct_o = 0, ans = 0;

        for(int i = 0; i < s.length(); i += 2){
           char one = s[i];
           char two = s[i + 1];

           ct_z = (one != '0') + (two != '0');
           ct_o = (one != '1') + (two != '1');

           ans += min(ct_z, ct_o);
        } 
        return ans;
    }
};