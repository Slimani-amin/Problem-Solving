/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            set<int> s;
            int ans=0;
            map<int,bool> m;
            for(int i=0;i<nums.size();i++){
                if(m[nums[i]]){
                    ans-=nums[i];
                }
                else{
                    m[nums[i]]=true;
                    ans+=nums[i];
                }
            }
    
            return ans;
            ;
        }
    };
// @lc code=end

