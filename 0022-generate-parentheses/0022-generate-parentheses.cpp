class Solution {
public:
    void berto(vector<string>& res, string& curr, int left, int right, int max){
        if(curr.length() == 2 * max){
            res.push_back(curr);
            return;
        }

        if(left <  max){
            curr += '(';
            berto(res, curr, left + 1, right, max);
            curr.pop_back();
        }

        if(right < left ){
            curr += ')';
            berto(res, curr, left, right + 1, max);
            curr.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector <string> ans;
        string curr;
        berto(ans, curr, 0, 0, n);
        return ans;
    }
};