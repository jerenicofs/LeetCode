class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex == 0) return {1};
        if(rowIndex == 1) return {1, 1};
        vector<vector<int>> ans;
        ans.push_back({1});
        ans.push_back({1, 1});
        for(int i = 2; i <= rowIndex; i++){
            
            vector<int> temp(1, 1);

            for(int j = 1; j < i; j++ ){
                temp.push_back(ans[i - 1][j - 1] + ans[i - 1][j]);
            }
            temp.push_back(1);
            ans.push_back(temp);
        }

        // for(int i = 0; i < ans.size(); i++){
        //     for(int j = 0; j < ans[i].size(); j++){
        //         cout << ans[i][j] << ", ";
        //     }
        //     cout << "\n";
        // }
        return ans[rowIndex];
    }
};