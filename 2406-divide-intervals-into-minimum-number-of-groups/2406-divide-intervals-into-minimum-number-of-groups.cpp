class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int>start, end;
        int n = intervals.size();
        for(int i = 0; i < n; i++){
            start.push_back(intervals[i][0]);
            end.push_back(intervals[i][1]);
        }

        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        for(int i = 0; i < n; i++){
            cout <<start[i] << ",";
            cout << end[i];
            cout << "\n";
        }
        int size = start.size(), track = 0, ct = 0;
        for(int i = 0; i < size; i++){
            if(start[i] > end[track] ){
                track++;
            }
            else ct++;
            cout << "Current track: " << track;
        }
        cout << ct;

        return ct;
    }
};