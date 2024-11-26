class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        if(edges.empty() && n > 1) return -1;
        if(edges.empty()) return 0;
        vector<int> ans;
        unordered_map<int, int> m;
        for(int i = 0; i < edges.size(); i++){
            m[edges[i][1]]++;
        }

        for(int i = 0; i < edges.size(); i++){
            if(m.find(edges[i][0]) == m.end()) ans.push_back(edges[i][0]);
        }

        return ans.size() > 1? -1: ans[0];
    }
};