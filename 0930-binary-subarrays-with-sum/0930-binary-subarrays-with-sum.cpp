class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> map;
        map[0] = 1;

        int n = nums.size();
        int ans = 0;
        int ps = 0;
        for(int i = 0; i < n; i++){
            ps += nums[i];

            if(map.find(ps - goal) != map.end()){
                ans += map[ps - goal];
            }

            map[ps]++;
        }
        return ans;
    }
};