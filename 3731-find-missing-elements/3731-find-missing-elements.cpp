class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }
        sort(nums.begin(), nums.end());
        int max_num = nums[nums.size() - 1];
        int min_num = nums[0];

        vector<int> ans;
        while(min_num < max_num){
            if(map.find(min_num) == map.end()) ans.push_back(min_num);
            min_num++;
        }

        return ans;
    }
};