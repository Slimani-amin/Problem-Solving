/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution {
    public:
        int rob(vector<int>& nums) {
            int n =nums.size();
            if(n==1){
                return nums[0];
            }
            int ans = 0;
            vector<int> v(n);
            for(int i=0; i<n;i++){
                if(i==0 || i==1){
                    v[i] = nums[i];
                }
                else if(i == 2){
                    v[i] = nums[i] + v[0];
                }
                else{
                    v[i] = nums[i] + max(v[i-2], v[i-3]);
                }
            }
            
          
    
            return max(v[n-1], v[n-2]);
    
            
            
        }
    };
// @lc code=end

