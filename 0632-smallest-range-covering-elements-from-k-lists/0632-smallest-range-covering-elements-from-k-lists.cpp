class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> minHeap;

        int maxv = -1, start = 0, end = INT_MAX;

        int n = nums.size();
        for(int i = 0; i < n; i++){
            minHeap.push({nums[i][0], i, 0});
            maxv = max(maxv, nums[i][0]);
        }

        while(true){
            int minv = minHeap.top()[0];
            int index = minHeap.top()[1];
            int val_index = minHeap.top()[2];

            minHeap.pop();

            if(maxv - minv < end - start){
                end = maxv;
                start = minv;
            }

            // If already the end of particular list
            if(val_index + 1 == nums[index].size()) break;

            minHeap.push({nums[index][val_index + 1], index, val_index + 1});
            maxv = max(maxv, nums[index][val_index + 1]);
        }

        vector<int> ans = {start, end};
        return ans;
    }
};