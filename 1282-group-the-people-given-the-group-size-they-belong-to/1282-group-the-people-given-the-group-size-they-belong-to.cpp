class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
    
        map<int, vector<int>> m;
        int n = groupSizes.size();
        for(int i = 0; i < n; i++){
            m[groupSizes[i]].push_back(i);
        }   

        vector<vector<int>> ans;

        int ct = 0;
        for(auto [gs, x] : m){
            vector<int> curr;
            for(int i = 0; i < x.size(); i++){
                curr.push_back(x[i]);
                if(curr.size() == gs){
                    ans.push_back(curr);
                    curr.clear();
                }
            }
            
        }
        return ans;


    }
};