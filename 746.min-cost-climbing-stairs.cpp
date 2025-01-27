/*
 * @lc app=leetcode id=746 lang=cpp
 *
 * [746] Min Cost Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
    vector<int> dp(n,0);
    dp[n-1] = cost[n-1];
    dp[n-2] = cost[n-2];
    for(int i=n-3;i>=0;i--){
        dp[i] = cost[i] + std::min(dp[i+1],dp[i+2]);
    }


        return std::min(dp[0],dp[1]);
    }
};
// @lc code=end

