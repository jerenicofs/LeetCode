class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // vector<int> merge;
        // int i = 0;
        // int j = 0;

        // while(i < nums1.size() && j < nums2.size()){
        //     if(nums1[i] < nums2[j]){
        //         merge.push_back(nums1[i]);
        //         i++;
        //     }
        //     else{
        //         merge.push_back(nums2[j]);
        //         j++;
        //     }
        // }

        // while(i < nums1.size()){
        //     merge.push_back(nums1[i]);
        //     i++;
        // }
        
        // while(j < nums2.size()){
        //     merge.push_back(nums2[j]);
        //     j++;
        // }

        // int n = merge.size();
        // if(n%2 == 0) return (merge[n/2 - 1] + merge[n/2]) / 2.0;
        // else return merge[n/2];

        vector<int>merge;
        if(nums1.empty() && nums2.empty()) return 0;
        else if(nums1.empty()) merge = nums2;
        else if(nums2.empty()) merge = nums1;
        else{
            merge = nums2;
            merge.insert(merge.end(), nums1.begin(), nums1.end());
        }
        sort(merge.begin(), merge.end());
        int n = merge.size();
        if(n%2 == 0) return ((double)(merge[n/2 - 1] + merge[n/2]) / 2);
        else return merge[n/2];
    }
};