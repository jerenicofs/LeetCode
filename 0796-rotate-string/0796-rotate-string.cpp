class Solution {
public:
    bool rotateString(string s, string goal) {
        
        int n = s.size();
        for(int i = 0; i < n; i++){
            string shift = s.substr(1) + s[0];
            s = shift;
            if(shift == goal) return true;
        }
        return false;
        
    }
};