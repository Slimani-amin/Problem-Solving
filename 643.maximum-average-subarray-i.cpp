/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if (nums.size() < k) {
            return 0; // ou une autre valeur par défaut selon le contexte
        }

        double sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        double maxSum = sum;

        for (int i = 1; i + k <= nums.size(); i++) {
            sum = sum - nums[i - 1] + nums[i + k - 1];
            if (sum > maxSum) {
                maxSum = sum;
            }
        }

        return maxSum / k;
    }
};
// @lc code=end

