class Solution {
public:
    int reverse(int x) {
        string temp = to_string(x);
        string rev = "";
        int size = temp.size();
        for(int i = size - 1; i >= 0; i--){
            rev += temp[i];
        }
        long long int ans = stoll(rev);
        
        if(ans > INT_MAX || ans < INT_MIN){
          
            return 0;
        }
        return x < 0 ? ans = -ans: ans;
    }
};