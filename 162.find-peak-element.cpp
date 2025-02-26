/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */

// @lc code=start
class Solution {
    public:
        int findPeakElement(vector<int>& nums) {
            auto max = max_element(nums.begin(), nums.end());
    
            return max-nums.begin();
    
            
        }
    };
// @lc code=end

