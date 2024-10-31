class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        vector<vector<string>> ans;

        unordered_map<string, unordered_map<string, int>> table;
        set<string> food;
        for(auto order : orders){
            string table_num = order[1];
            string food_name = order[2];
            table[table_num][food_name]++;
            food.insert(food_name);
        }
        vector<string> row1 = {"Table"};
        row1.insert(row1.end(), food.begin(), food.end());

        ans.push_back(row1);        

        for(auto [tab, ord] : table){
            vector<string> qty = {tab};
            for(string f : food){
                qty.push_back(to_string(ord[f]));
            }
            ans.push_back(qty);
        }

        sort(ans.begin() + 1, ans.end(), [] (vector<string> a, vector<string> b){
            return stoi(a[0]) < stoi(b[0]);
        });

        
        return ans;
    }
};