/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] != 0) {
                if(nums[j] == 0) {
                    swap(nums[i], nums[j]);
                }
                j++;
            }
        }
    }
};
// @lc code=end

