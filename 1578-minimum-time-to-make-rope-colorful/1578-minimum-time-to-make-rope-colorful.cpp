class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        char curr, prev;
        int ans = 0;
        int sum = 0;
        int maxs = 0;
        int n = colors.length();
        for(int i = 1; i <= n; i++){
            curr = colors[i];
            prev = colors[i - 1];

            if(curr == prev){
                // cout << "Ini i = " << i << endl;

                maxs = maxs > neededTime[i - 1] ? maxs:neededTime[i - 1];
                // maxs = max(neededTime[i - 1], maxs);
                // cout << "Maxs = " << maxs << endl;

                ans += neededTime[i] < maxs? neededTime[i]:maxs;
                // ans += min(neededTime[i], maxs);
                
                // cout << "ans sekarang = " << ans << endl;
            }
            else maxs = 0;
            // cout << endl;

        }

        return ans;
    }
};