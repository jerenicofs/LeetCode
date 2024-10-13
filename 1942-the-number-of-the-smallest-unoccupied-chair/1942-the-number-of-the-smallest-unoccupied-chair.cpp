class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {

        int n = times.size();
        
        priority_queue<int, vector<int>, greater<int>> seat;
        
        // track the arrival time and pair with the friend index
        vector<pair<int,int>> time_i;

        for(int i = 0 ; i < n; i++){
            time_i.push_back({times[i][0], i});
            seat.push(i);
        }
        
        sort(time_i.begin(), time_i.end());
        
        // for storing the leaving time ascendingly with the chair occupied paired.
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> minHeap;

        for(const auto& [arrive, target_i] : time_i){
            while(!minHeap.empty() && minHeap.top().first <= arrive){
                seat.push(minHeap.top().second);
                minHeap.pop();
            }

            int chair = seat.top();
            seat.pop();

            if(target_i == targetFriend) return chair;

            minHeap.push({times[target_i][1], chair});
        }
        return -1;

    }
};