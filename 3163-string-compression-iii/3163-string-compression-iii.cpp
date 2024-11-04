class Solution {
public:
    string compressedString(string word) {
        // sort(word.begin(), word.end());
        int ct = 1;
        string comp = "";
        int n = word.size();
        for(int i = 1; i <= n ; i++){
            if(word[i] !=  word[i - 1]){
                comp += to_string(ct);
                comp += word[i - 1];
                ct = 1;
            }
            else{
                if(ct == 9){
                    comp += to_string(ct);
                    comp += word[i - 1];
                    ct = 1;
                }
                else ct++;
            }
        }
        return comp;
    }
};