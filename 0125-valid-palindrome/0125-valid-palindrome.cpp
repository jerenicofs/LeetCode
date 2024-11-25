class Solution {
public:
    bool isPalindrome(string s) {
        string temp ="";
        for (char c : s) {
            if (isalnum(c)) {
                temp += tolower(c);
            }
        }
        for(int i = 0, j = temp.size() - 1; i < temp.size(), j >= 0; i++, j--){
            if(temp[i] != temp[j]) return false;
        }
        return true;
    }
};