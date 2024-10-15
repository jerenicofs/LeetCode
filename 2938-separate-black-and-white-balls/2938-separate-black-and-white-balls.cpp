class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.size();

        long long ct = 0, white_ct = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1') white_ct++;
            else{
                ct += white_ct;
            }
        }
        return ct;
    }
};