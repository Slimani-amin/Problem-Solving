/*
 * @lc app=leetcode id=1004 lang=cpp
 *
 * [1004] Max Consecutive Ones III
 */

// @lc code=start
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        queue<int> q;
        int max =0;
        int nmbr = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                nmbr++;

            }
            else{
                q.push(i);
                if(k>0){
                    nmbr++;
                    k--;
                }
                else{
                    nmbr = i - q.front();
                    q.pop();
                }
            }
            if(max<nmbr){
                max = nmbr;
            }
        }
        return max;
        
    }
};
// @lc code=end

