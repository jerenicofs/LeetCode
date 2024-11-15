class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int curr = 0;
        for(int i = 0; i < n; i++){
            if(curr < nums[i])curr = nums[i];

            if(i != n - 1 && !curr) return false;
            curr--;
        }
        return true;
    }
};