class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int ans = 0, buy = prices[0];

        for(int i = 0; i < n; i++){
            if(prices[i] < buy) buy = prices[i];
            ans = max(ans, prices[i] - buy);
        }
        return ans;
    

    }
};