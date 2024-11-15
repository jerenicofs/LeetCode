class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;
        for(auto &x : strs){
            string val = x;
            sort(x.begin(), x.end());
            m[x].push_back(val);
        }

        for(auto &x : m)ans.push_back(x.second);
        
        
        return ans;

    }
};