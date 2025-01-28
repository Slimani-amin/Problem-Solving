/*
 * @lc app=leetcode id=1493 lang=java
 *
 * [1493] Longest Subarray of 1's After Deleting One Element
 */

// @lc code=start
class Solution {
    public int longestSubarray(int[] nums) {
        int count = 0;
        int index = -1;
        int max = 0;

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 1) {
                count++;
            } else {
                if (index == -1) {
                    index = i;
                } else {
                    count = i - index - 1;
                    index = i;
                }
            }

            if (max < count) {
                max = count;
            }
        }

        return max < nums.length ? max : max - 1;
    }
}

// @lc code=end

