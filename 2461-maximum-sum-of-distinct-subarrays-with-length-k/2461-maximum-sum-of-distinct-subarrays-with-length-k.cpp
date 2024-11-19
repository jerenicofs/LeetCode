class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<long long, long long> m;
        long long ans = 0;
        long long curr = 0;
        for(int i = 0; i < nums.size(); i++){
            // for(int j = i; j < i + k; j++){
            //     // cout << "Hitung loop ke: " << j <<endl;
            //     if(m.find(nums[j]) == m.end()) temp.push_back(nums[j]);
            //     // cout << "Masuk if\n" <<endl;  
            //     m[nums[j]]++;
            // }
            m[nums[i]]++;
            curr += nums[i];

            if(i >= k){
                int prev = nums[i - k];
                curr -= prev;
                m[prev]--;
                if(m[prev] == 0) m.erase(prev);
            }
            // cout << temp.size() << endl;

            if(m.size() == k)ans = max(ans, curr);
        }
        return ans;
    }
};