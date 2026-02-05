class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        
        for(int i = 0; i < nums.size(); i++){
            minHeap.push({nums[i], i});
        }

        while(k > 0){
            pair<int, int> curr = minHeap.top();
            int idx = curr.second;
            int curr_val = curr.first;

            curr_val *= multiplier;

            nums[idx] = curr_val;
            minHeap.pop();
            minHeap.push({curr_val, idx});
            k--;
        }

        return nums;
    }
};