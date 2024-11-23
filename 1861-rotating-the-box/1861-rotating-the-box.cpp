class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {

        vector<vector<char>> ans(box[0].size(), vector<char>(box.size()));
        int row = box.size();
        int col = box[0].size();

        for(int i = 0 ; i < row; i++){
            int fall = col - 1;
            for(int j = col - 1; j >= 0; j--){

                if(box[i][j] == '#'){
                    
                    box[i][fall] = '#';

                    if(fall != j) box[i][j] = '.';
                    fall--;
                }
                else if(box[i][j] == '*') fall = j - 1;
            }
        }

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                ans[j][row - 1 - i] = box[i][j];
            }
        }
        return ans;

    }
};