class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        // First Method
        
        vector<int> merge;
        int i = 0, j = 0, size1 = nums1.size(), size2 = nums2.size();

        while(i < size1 && j < size2){
            if(nums1[i] < nums2[j]){
                merge.push_back(nums1[i]);
                i++;
            }
            else{
                merge.push_back(nums2[j]);
                j++;
            }
        }

        while(i < size1){
            merge.push_back(nums1[i]);
            i++;
        }
        
        while(j < size2){
            merge.push_back(nums2[j]);
            j++;
        }

        int n = merge.size();
        if(n%2 == 0) return (merge[n/2 - 1] + merge[n/2]) / 2.0;
        else return merge[n/2];

        // Second Method

        // vector<int>merge;
        // if(nums1.empty() && nums2.empty()) return 0;
        // else if(nums1.empty()) merge = nums2;
        // else if(nums2.empty()) merge = nums1;
        // else{
        //     merge = nums2;
        //     merge.insert(merge.end(), nums1.begin(), nums1.end());
        // }
        // sort(merge.begin(), merge.end());
        // int n = merge.size();
        // if(n%2 == 0) return ((double)(merge[n/2 - 1] + merge[n/2]) / 2);
        // else return merge[n/2];
    }
};