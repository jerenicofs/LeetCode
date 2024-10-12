class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size() - 1;
        int i = size;
        while(i >= 0){
            if(digits[i] + 1 == 10){
                digits[i] = 0;
                if(i == 0){
                    digits.insert(digits.begin(), 1);
                    return digits;
                }
            }
            else {
                digits[i] += 1;
                return digits;
            }
            i--;
        }
        return digits;
    }
};