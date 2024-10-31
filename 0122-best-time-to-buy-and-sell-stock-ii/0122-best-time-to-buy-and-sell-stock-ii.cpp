class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0, buy = prices[0];
        if(prices.size() <= 1) return 0;
        if(prices.size() <= 2 && prices[1] > prices[0]) return prices[1] - prices[0]; 
        else if(prices.size() <= 2 && prices[1] < prices[0]) return 0;
        for(int i = 0; i < n; i++){
            if(prices[i] < buy) buy = prices[i];
            if(prices[i] > prices[i + 1] && i < n - 1){
                profit += (prices[i] - buy);
                buy = prices[i + 1];
            }
            if(i == n - 2 && prices[i] < prices[i + 1])profit += prices[i + 1] - buy;
        }
        return profit;
    }
};