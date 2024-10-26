class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        int n = nums.size();
        int ans = INT_MIN;
        for(int i = 0; i < n; i++){
            m[nums[i]]++;
        }
        for(auto x : m){
            if(x.second == 1){
                return x.first;
            }
        }
        return -1;
    }
};