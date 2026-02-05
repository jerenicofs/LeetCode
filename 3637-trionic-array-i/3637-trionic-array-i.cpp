class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return false;

        int lastDir = 0; 
        
        int inc_count = 0;
        int dec_count = 0;

        for(int i = 1; i < n; i++){
           
            if (nums[i] == nums[i-1]) return false;

            int currentDir = 0;
            if (nums[i] > nums[i-1]) currentDir = 1; 
            else currentDir = -1; 

            if (currentDir != lastDir) {
                if (currentDir == 1) inc_count++;
                if (currentDir == -1) dec_count++;
                lastDir = currentDir;
            }
        }
        return (inc_count == 2 && dec_count == 1);
    }
};