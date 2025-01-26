/*
 * @lc app=leetcode id=1679 lang=cpp
 *
 * [1679] Max Number of K-Sum Pairs
 */

// @lc code=start
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int output = 0;
        vector<int> arr(nums.size(),k);
        int i =0, j=nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j]==k){
                i++;
                j--;
                output++;
            }
            else if(nums[i]+nums[j]>k){
                j--;
            }
            else{
                i++;
            }



        }
       
        
        return output;
        
    }
};
// @lc code=end

