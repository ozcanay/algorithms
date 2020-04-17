#include "str.h"

/// GOOGLE OA
/// https://leetcode.com/discuss/interview-question/553399/

/*
 * Given an Array A, find the minimum amplitude you can get after changing up to 3 elements. Amplitude is the range of the array (basically difference between largest and smallest element).

Example 1:

Input: [-1, 3, -1, 8, 5 4]
Output: 2
Explanation: we can change -1, -1, 8 to 3, 4 or 5

 Example 2:

Input: [10, 10, 3, 4, 10]
Output: 0
Explanation: change 3 and 4 to 10
So the way I did it was sort it, and then start removing the end elements because we would only want to
 change a element to a number within the smallest amplitude. There are 4 options, remove all 3 from the end,
 remove 2 from end 1 from start, remove 1 from end and 2 from start, remove 3 from start.
 The runtime should be O(nlogn) since we used sort. I'm not sure if my logic is correct or maybe if we can do it in O(n)
 */

/// You don't need a full sort. You only need to know the 3 greatest and 3 least elements.
/// Scanning the array that many times may sound like a lot but it's asymptotically better than sorting.

int minAmplitude(vector<int>& nums) {
    return 0;
}


/*
 * private int minAmplitude(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        if(n <= 3) return 0;
        int ans = nums[n-1]-nums[0];
        for(int i = 0, j = n-4; j < n; i++, j++) {
            ans = Math.min(ans, nums[j]-nums[i]);
        }
        return ans;
    }
 */