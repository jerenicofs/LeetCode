class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        vector<int> y;
        int mid = nums.size() / 2;
        int z = nums.size();
        for(int i = mid; i < z; i++) y.push_back(nums[i]);
        for(int i = 0; i < n; i++){
            ans.push_back(nums[i]);
            ans.push_back(y[i]);
        }
        return ans;
    }
};