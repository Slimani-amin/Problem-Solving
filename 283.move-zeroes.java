/*
 * @lc app=leetcode id=283 lang=java
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
    public void moveZeroes(int[] nums) {
        int tmp,k= 0;
   
        int n = nums.length;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i+1; j < n -1; j++) {
            if(nums[j]==0){
                k++;
                tmp = nums[n-k];
                nums[n-k] = nums[j];
                nums[j] = tmp;
            }
            if (nums[j] > nums[j + 1]) {
                // Échange arr[j] et arr[j+1]
                tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
            }
        }
    }

     
        
}
}
// @lc code=end

