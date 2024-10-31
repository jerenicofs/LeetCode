class Solution {
public:
    int hammingWeight(int n) {
        string sets = "";
        
        while(n > 0){
            int res = n % 2;
            sets += to_string(res);
            n /= 2;
        }  

        reverse(sets.begin(), sets.end());
      
        int ct = 0;
        for(int i = 0; i < sets.size(); i++){
            if(sets[i] == '1') ct++;
        }
        return ct;
    }
};