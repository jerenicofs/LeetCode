class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pas;
        if(numRows > 0)  pas.push_back({1});
        if(numRows > 1)  pas.push_back({1,1});
        for(int i = 2; i < numRows; i++){
            vector<int>temp(1, 1);
            
            for(int j = 1; j < i; j++){
                temp.push_back(pas[i - 1][j - 1] + pas[i - 1][j]);
            }

            temp.push_back(1);
            pas.push_back(temp);
        }

        return pas;
    }
};