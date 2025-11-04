class Solution {
public:
    void processWindow(unordered_map<int, int>& mp, vector<int>& ans, int x) {
        vector<pair<int, int>> freq(mp.begin(), mp.end());

        sort(freq.begin(), freq.end(), [](const pair<int,int>& a, const pair<int, int>& b) {
            if(a.second != b.second) return a.second > b.second;
            return a.first > b.first; 
          });
        
        int sum = 0;
        for(int j = 0; j < x && j < freq.size(); j++){
            sum += freq[j].first * freq[j].second;
        }
        ans.push_back(sum);
    }
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        
        unordered_map<int, int> mp;
        vector<int> ans;
        int n = nums.size();

        for(int i = 0; i < k; i++) {
            mp[nums[i]]++;
        }

        processWindow(mp, ans, x); 

        for(int i = k; i < n; i++){
            mp[nums[i]]++;

            mp[nums[i - k]]--;

            processWindow(mp, ans, x);
        }
        
        return ans;
    }
};