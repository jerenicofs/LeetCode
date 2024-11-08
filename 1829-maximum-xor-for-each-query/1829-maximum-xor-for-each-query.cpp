class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();

        vector<int> ans;
        int maxs = (1 << maximumBit) - 1;
        int xors = 0;
        for(int i : nums) xors ^= i;

        for(int i = 0; i < n; i++){
            ans.push_back(xors ^ maxs);
            xors ^= nums[n - 1 - i]; 
        }
        return ans;

       
    }
};