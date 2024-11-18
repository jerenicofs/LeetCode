class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans(code.size(), 0);

        int tres = abs(k);

        if(k > 0){
            for(int i = 0; i < code.size(); i++){
                int j;
                if(i == code.size() - 1)j = 0;
                else j = i + 1;
                int sum = 0;
                tres = abs(k);
                while(tres > 0){
                    sum += code[j];
                    j = (j + 1) % code.size();
                    tres--;
                }
                ans[i] = sum;
            }
            return ans;
        }

        if(k < 0){
            for(int i = code.size() - 1; i >= 0; i--){
                int j;
                if(i == 0) j = code.size() - 1;
                else j = i - 1;
                int sum = 0;
                tres = abs(k);
                while(tres > 0){
                    sum += code[j];
                    if(j == 0) j = code.size() - 1;
                    else j--;
                    tres--;
                }
                ans[i] = sum;
            }
            return ans;
        }
        return ans;
    }
};