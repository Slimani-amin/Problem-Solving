/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 */

// @lc code=start
class Solution {
    public:
        int findKthLargest(vector<int>& nums, int k) {
            int n =nums.size();
            priority_queue<int> pq;
            for(auto& num : nums){
                pq.push(num);
            }
    
            while(k>1){
                pq.pop();
                k--;
            }
    
            return pq.top();
            
        }
    };
// @lc code=end

