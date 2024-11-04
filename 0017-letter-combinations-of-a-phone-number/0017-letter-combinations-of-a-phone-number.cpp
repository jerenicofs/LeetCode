class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};

        unordered_map<char, string> m; 
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";

        vector<string> ans = {""};
        int n = digits.size();
        for(char digit : digits){
            vector<string> temp;
            for(string x : ans){
                for(char z : m[digit]){
                    temp.push_back(x + z);
                }
            }
            ans.swap(temp);
        }
        return ans;
    }
};