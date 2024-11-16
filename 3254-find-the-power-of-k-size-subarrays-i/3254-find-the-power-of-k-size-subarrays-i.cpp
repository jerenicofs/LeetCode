class Solution {
public:

    bool checkSort(vector<int> check){
        for(int i = 1; i < check.size(); i++){
            if(check[i] != check[i - 1] + 1) return false;
        }
        return true;
    }

    vector<int> resultsArray(vector<int>& nums, int k) {
        if(nums.size() < 2) return nums;
        vector<int> ans;
        vector<int> temp;
        for(int i = 0; i < k; i++){
            temp.push_back(nums[i]);
        }

        for(int i = k; i <= nums.size(); i++){
            if(checkSort(temp)) ans.push_back(temp.back());
            else ans.push_back(-1);
            if(i != nums.size()){
                temp.erase(temp.begin());
                temp.push_back(nums[i]);
            }
        }
        return ans;
    }
};