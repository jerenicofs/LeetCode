class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;

        while(l < r){
            int tot = numbers[l] + numbers[r];

            if(tot == target) return {l + 1, r + 1};

            else if (tot < target) l++;

            else r--;
        }
        return {0, 0};
    }
};