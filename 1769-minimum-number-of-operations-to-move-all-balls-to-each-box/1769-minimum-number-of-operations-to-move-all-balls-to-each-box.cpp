class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;

        for(int i = 0; i < boxes.size(); i++){
            int step = 0;
            for(int j = 0; j < boxes.size(); j++){
                if(i != j){
                    // cout << "Masuk i = " << i << endl;
                    // cout << "Masuk j = " << j << endl;
                    if(boxes[j] == '1') step += abs(i - j);
                }
            }
            cout << step << endl;
            ans.push_back(step);
        }
        return ans;
    }
};