class Solution {
public:
    int maximumSwap(int num) {

        string split = to_string(num);
        int n = split.size();

        vector<int> track(n);
        track[n - 1] = n - 1;
        for(int i = n - 2 ; i >= 0; i--){
            if(split[i] > split[track[i + 1]]) track[i] = i;
            else track[i] = track[i + 1];
        }

        for(int i = 0; i < n; i++){
            if(split[i] < split[track[i]]){
                swap(split[i], split[track[i]]);
                break;
            }
        }

        return stoi(split);
    }
};