class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        
        string ans = "";
        vector<pair<int, char>> x = {{a, 'a'}, {b, 'b'}, {c, 'c'}};
        while(true){
            sort(x.begin(), x.end(), greater<>());
            bool possible = false;
        
            for(auto& a : x){
                if(a.first > 0 && (ans.length() < 2 || ans.back() != a.second 
                || ans[ans.size() - 2] != a.second)){
                    ans += a.second;
                    a.first--;
                    possible = true;
                    break;
                }
            }
            if(!possible) break;
        }
        return ans;
    }
};