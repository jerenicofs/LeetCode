class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // if(nums.empty()) return 0;

        // int ct = nums.size();
        // int i = 0;
        // // for(i = 0; i < nums.size(); i++){
        // //     if(nums[i] == val){
        // //         nums.erase(nums.begin() + i);
        // //         i = 0;
        // //         ct--;
        // //     }
        // // }

        // while(i < nums.size()){
        //     // cout << "current nums in i = " << i << "\n";
        //     // for(int j = 0; j < nums.size(); j++){
        //     //     cout << nums[j] <<", ";
        //     // }
        //     // cout << "\n";

        //     if(nums[i] == val){
        //         // cout << "Enter if in i = " << i << "\n";
        //         nums.erase(nums.begin() + i);
        //         ct--;
        //     }
        //     else{
        //         i++;
        //     }
        // }
        // // cout << i;
        // // cout << ct;
        // return ct;

        int ans = nums.size();
        vector<int> temp;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val) temp.push_back(nums[i]);
            else ans--;
        }
        nums = temp;
        return ans;
    }
};