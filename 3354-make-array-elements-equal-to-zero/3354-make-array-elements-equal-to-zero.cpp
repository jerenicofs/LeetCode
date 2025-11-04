class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int l, r;
        int sum = 0;
        l = 0;
        for(int num: nums){
           sum += num;     
        }

        r = sum;
        int ct = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0 ){
               l += nums[i];
               r -= nums[i];     
            }
            else if(abs(r - l) <= 1){
                if(r == l) ct += 2;
                else ct++;
            }
        }
        return ct;
    }
};