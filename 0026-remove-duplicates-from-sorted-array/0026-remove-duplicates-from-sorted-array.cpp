class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // if(nums.empty()) return 0;

        // int curr = 1;
        // for(int i = 1; i < nums.size() ; i++){
        //     if(nums[i] != nums[i - 1]){
        //         nums[curr] = nums[i];
        //         curr++;
        //     }
        // }
        // // cout << curr;
        // return curr;


        int track = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i - 1] != nums[i]){
                nums[track] = nums[i];
                track++;
            }
        }
        return track;
    }
};