class Solution {
public:
    bool isPalindrome(int x) {

        string z = to_string(x);
        
        for(int i = 0, j = z.size() - 1; i < z.size(), j > 0  ;i++, j--){
            if(z[i] != z[j]) return false;
        }
        return true;
    }
};