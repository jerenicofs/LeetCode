class Solution {
public:

    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        vector<int> ans;
        sort(items.begin(), items.end());

        vector<int> max_list;

        int curr = 0;
        for(int i = 0; i < items.size(); i++){
            curr = max(curr, items[i][1]);
            max_list.push_back(curr);
        }

        vector<int> prices;
        for(int i = 0; i < items.size(); i++) prices.push_back(items[i][0]);

        for(int q : queries){
            int ind = upper_bound(prices.begin(), prices.end(), q) - prices.begin() - 1;

            if(ind > -1) ans.push_back(max_list[ind]);
            else ans.push_back(0);
        }
        return ans;
    }
};