class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
            if(mp[nums[i]] > 1) ans.push_back(nums[i]);
        }
        return ans;
    }
};