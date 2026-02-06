class Solution {
public:
    double precompute(double pass, double total){
        return ((pass + 1)/(total + 1)) - (pass/total); 
    }

    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double, pair<double, double>>> maxHeap;

        int n = classes.size();

        for(int i = 0; i < n; i++){
            maxHeap.push({precompute(classes[i][0], classes[i][1]) , {classes[i][0], classes[i][1]}});
        }

        for(int i = 0; i < extraStudents; i++){
            pair<double, double> top = maxHeap.top().second;

            int students = top.second;
            int pass = top.first;

            maxHeap.pop();

            maxHeap.push({precompute(pass + 1, students + 1 ), {pass + 1, students + 1}});
        }

        double avg = 0;
        while(!maxHeap.empty()){
            avg += maxHeap.top().second.first / maxHeap.top().second.second;
            maxHeap.pop();
        }
        return avg/n;

    }
};