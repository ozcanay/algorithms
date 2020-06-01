#include "arr.h"

using namespace std;

/*
 * Given an array nums of n integers where n > 1,  return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

Example:

Input:  [1,2,3,4]
Output: [24,12,8,6]
Constraint: It's guaranteed that the product of the elements of any prefix or suffix of the array (including the whole array) fits in a 32 bit integer.

Note: Please solve it without division and in O(n).

Follow up:
Could you solve it with constant space complexity? (The output array does not count as extra space for the purpose of space complexity analysis.)
 */

/// Solution is based on a observation:
/// Every product for an item is multiplication of the items before that item, multiplied by multiplication of the items after that item.
vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> res(nums.size());
    int x = 1;

    for(int i = 0; i < nums.size(); ++i) {
        res[i] = x;
        x *= nums[i];
    }

    x = 1;
    for(int i = nums.size() - 1; i >= 0; --i) {
        res[i] *= x;
        x *= nums[i];
    }

    return res;
}