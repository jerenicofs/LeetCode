class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char, int> x;
        x.insert({'I', 1});
        x.insert({'V', 5});
        x.insert({'X', 10});
        x.insert({'L', 50});
        x.insert({'C', 100});
        x.insert({'D', 500});
        x.insert({'M', 1000});

        int sum = 0;

        for(int i = 0; i < s.size() ; i++){
            if(x[s[i]] < x[s[i+1]]) sum -= x[s[i]];
            else sum += x[s[i]];
        }
        return sum;
    }
};