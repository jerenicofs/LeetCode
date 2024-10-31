class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        
        map<pair<string, string>, int> m;

        int n = words.size();
        for(int i = 0 ; i < n ; i++){

            string odd = "";
            string even = "";
            for(int j = 0; j < words[i].size(); j++){
                if(j%2 == 0) odd += words[i][j];
                else even += words[i][j];
            }

            sort(odd.begin(), odd.end());
            sort(even.begin(), even.end());

            m[make_pair(odd, even)]++;
        }
        return m.size();
    }
};