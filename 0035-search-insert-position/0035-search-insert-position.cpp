class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        for(int i = 0 ; i < size; i++){
            if(nums[i] == target) return i;
        }

        int mark = 0;
        for(int i = 0; i < size; i++){
            if(nums[i] < target) mark = i + 1;
        }
        return mark;
    }
};