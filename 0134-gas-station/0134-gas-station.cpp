class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gasTot = 0;
        int costTot = 0;
        int curr = 0, ans = 0;

        for(int i = 0; i < gas.size() ; i++){
            gasTot += gas[i];
            costTot += cost[i];
            // cout << costTot << endl;

            curr = curr + gas[i] - cost[i];

            if(curr < 0){
                ans = i + 1;
                curr = 0;
            }
        }
        // cout << gasTot<< ", " << costTot << endl;
        if(gasTot < costTot) return -1;
        return ans;


    }
};