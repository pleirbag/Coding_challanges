/*You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, 
and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored 
inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m 
elements denote the elements that should be merged, 
and the last n elements are set to 0 and should be ignored. nums2 has a length of n.*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result;
        int         idx1 {0};
        int         idx2 {0};

        for (int i {0}; i < (m + n); i++){
            if ((idx2 < n && nums1[idx1] > nums2[idx2]) || idx1 >= m){
                result.push_back(nums2[idx2]);
                idx2++;
            }
            else{
                result.push_back(nums1[idx1]);
                idx1++;
            }
        }
        while (idx1 < (m + n) && nums1[idx1] != 0)
        {
            result.push_back(nums1[idx1]);
            idx1++;
        }
        for (int i {0}; i < (m + n); i++)
        {
            nums1[i] = result[i];
        }
    }
};