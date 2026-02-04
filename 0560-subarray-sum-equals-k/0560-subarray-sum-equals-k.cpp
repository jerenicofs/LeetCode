class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        map[0] = 1;

        int n = nums.size();
        int prefSum = 0;
        int count = 0;

        for(int i = 0; i < n; i++){
            prefSum += nums[i];

            if(map.find(prefSum - k) != map.end()){
                count += map[prefSum - k];
            }

            map[prefSum]++;
        }

        return count;
    }
};