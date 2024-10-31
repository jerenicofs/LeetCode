class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        for(int i = 0; i < l.size(); i++){
            vector<int> curr;
            for(int j = l[i]; j <= r[i]; j++){
                curr.push_back(nums[j]);
            }
            sort(curr.begin(), curr.end());
            if(curr.size() < 2) ans.push_back(false);
            else{
                int diff = curr[1] - curr[0];
                bool flag = true;
                for(int k = 1; k < curr.size(); k++){
                    if(curr[k] - curr[k - 1] != diff) flag = false;
                }
                ans.push_back(flag);
                
            }
            curr.clear();

        }
        return ans;
    }
};