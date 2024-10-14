class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<long long> maxHeap;
        long long n = nums.size();
        
        for(long long i = 0; i < n; i++)maxHeap.push(nums[i]);
        
        long long ans = 0;
        while(k > 0){
            long long curr = maxHeap.top();

            ans += curr;
            
            maxHeap.pop();

            maxHeap.push(ceil(curr/3.0));

            k--;
        }
        return ans;
    }
};