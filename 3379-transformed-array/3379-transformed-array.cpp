class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        int step = 0;
        vector<int> temp = nums;
        for(int i = 0; i < n; i++){
            temp.push_back(nums[i]);
        }

        for(int i = 0; i < n ; i++){
            if(nums[i] > 0){
                step = nums[i] % n;
                res.push_back(temp[i + step]);
            }
            else if(nums[i] < 0){
                step = (abs(nums[i]) % n) * -1;
                res.push_back(temp[i + step + n]);
            }
            else{
                res.push_back(nums[i]);
            }
            
        }

        return res;
    }
};