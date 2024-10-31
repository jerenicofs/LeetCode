class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left;
        vector<int> piv;
        vector<int> right;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] < pivot) left.push_back(nums[i]);
            else if(nums[i] == pivot) piv.push_back(nums[i]);
            else right.push_back(nums[i]);
        }
        vector<int> merge = left;
        merge.insert(merge.end(), piv.begin(), piv.end());
        merge.insert(merge.end(), right.begin(), right.end());
        return merge;

    }
};