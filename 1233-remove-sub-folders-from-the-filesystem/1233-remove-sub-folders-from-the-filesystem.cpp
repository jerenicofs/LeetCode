class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());

        int n = folder.size();
        vector<string> res;
        string prev = folder[0];
        res.push_back(prev);
        for(int i = 1; i < n; i++){
            
            if(folder[i].find(prev + '/') != 0){
                res.push_back(folder[i]);
                prev = folder[i];
            }
        }
        return res;
    }
};