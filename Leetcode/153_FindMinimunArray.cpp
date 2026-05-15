/*Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

    [4,5,6,7,0,1,2] if it was rotated 4 times.
    [0,1,2,4,5,6,7] if it was rotated 7 times.

Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums of unique elements, return the minimum element of this array.

You must write an algorithm that runs in O(log n) time.*/

// solution using a recursive function and binary search with O(logn) complexity
class Solution {
public:
    int recursive_b_search(vector<int> nums, int start, int end, int previous){
        int middle = (end + start) / 2;
        if (nums[middle] == previous)
            return (nums[middle] < nums[middle + 1] ? nums[middle] : nums[middle+1]);
        if (nums[middle] > nums[end])
            return(recursive_b_search(nums, middle, end, nums[middle]));
        if (nums[middle] < nums[end])
            return(recursive_b_search(nums, start, middle, nums[middle]));
        return 0;
    }

    int findMin(vector<int>& nums) {
        if (nums.size() == 1)
            return (nums[0]);
        return (recursive_b_search(nums, 0, static_cast<int>(nums.size()) - 1, nums[0]));
    }
};