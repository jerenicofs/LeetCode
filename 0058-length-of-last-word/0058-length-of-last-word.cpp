class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int ct = 0;
        bool space = false;
        int flag = 0;
        for(int i = s.length() - 1; i >= 0 ; i--){
            if(s[i] == ' '){
                space = true;
            }
            else{
                ct++;
                space = false;
                flag = 1;
            };

            if(space == true && flag == 1) return ct;
        }
        return ct;
    }
};