class Solution {
public:
    void backtrack(const vector<int> &nums, int index, int currentOR, int maxOR, int &ct)
    {
        if (currentOR == maxOR) ct++;
        

        for (int i = index; i < nums.size(); ++i)
        {
            backtrack(nums, i + 1, currentOR | nums[i], maxOR, ct);
        }
    }

    int countMaxOrSubsets(vector<int> &nums)
    {
        int max = 0;
        for (int num : nums)
        {
            max |= num;
        }

        int ct = 0;
        backtrack(nums, 0, 0, max, ct);

        return ct;
    }
};