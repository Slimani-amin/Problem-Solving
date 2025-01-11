/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start

#include <vector>
#include <numeric>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumLeft = 0;
        int sumRight = accumulate(nums.begin(), nums.end(), 0)-nums[0];
        if(sumRight==0){
            return 0;
        }

        for(int i=1;i<nums.size();i++){
            sumLeft += nums[i-1];
            sumRight -= nums[i];
            if(sumLeft == sumRight){
                return i;
            }
            
        


        }
        return -1;
        
    }
};
// @lc code=end

