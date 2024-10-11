class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // linear search

        // int size = nums.size(), mark = 0;
        // for(int i = 0 ; i < size; i++){
        //     if(nums[i] == target) return i;
        //     else if(nums[i] < target) mark = i + 1;
        // }

        // return mark;

        // binary search
        int size = nums.size();
        int left = 0, right = size - 1;
 
        while( left <= right){
            int mid = (left + right) / 2;
        
            if(nums[mid] == target) return mid;
            
            if(nums[mid] > target) right = mid - 1;
            else left = mid + 1;
        }
        return left;
    }
};