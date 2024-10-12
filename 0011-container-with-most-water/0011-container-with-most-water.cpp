class Solution {
public:
    int maxArea(vector<int>& height) {
        // int n = height.size();
        // int area = 0, max = 0;
        // for(int i = 0; i < n; i++){
        //     area = 0;
        //     for(int j = i + 1; j < n; j++){
        //         int w = j - i;;
        //         int h = min(height[j], height[i]);
        //         area = w*h;
        //         if(max < area) max = area;
        //     }
        // }
        // return max;

        int i = 0, j = height.size() - 1, maxs = 0;

        while(i < j){
            maxs = max(maxs, min(height[i], height[j]) * (j - i));
            if(height[i] < height[j]) i++;
            else j--;
        }
        return maxs;

    }
};