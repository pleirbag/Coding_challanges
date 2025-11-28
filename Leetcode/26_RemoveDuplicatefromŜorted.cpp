/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.

The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.

Custom Judge:

The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len {static_cast<int>(nums.size())};

        for (int i {0}; i + 1 < len; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                for (int ii {0}; (i + ii + 1) < len; ii++)
                    nums[i + ii] = nums[i + ii + 1];
                len--;
                i--;
            }
        }
        return (len);
    }
};

//could use for (int i {0}; (i + 1) != nums.end(); i++)
//choose not to so i could return the len as the result