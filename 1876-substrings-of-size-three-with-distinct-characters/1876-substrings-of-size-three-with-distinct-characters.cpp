class Solution {
public:
    int countGoodSubstrings(string s) {
        
        int n = s.size();
        int ct = 0;
        for(int i = 0; i <= n - 3; i++){
            set <char> st;

            for(int j = i; j < i + 3; j++){
                st.insert(s[j]);
            }
            if(st.size() == 3) ct++;
        }
        return ct;
    }
};