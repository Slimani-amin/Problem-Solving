/*
 * @lc app=leetcode id=2390 lang=java
 *
 * [2390] Removing Stars From a String
 */

// @lc code=start
class Solution {
    public String removeStars(String s) {
        int n = s.length();
        StringBuilder output = new StringBuilder();
        int count = 0;

        for (int i = n - 1; i >= 0; i--) {
            if (s.charAt(i) == '*') {
                count++;
            } else {
                if (count > 0) {
                    count--;
                } else {
                    output.append(s.charAt(i));
                }
            }
        }

        return output.reverse().toString();
    }
}

// @lc code=end

