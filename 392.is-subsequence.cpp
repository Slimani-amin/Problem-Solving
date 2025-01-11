/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int k=0;
        for(int i=0;i<t.size();i++){
            if(s[k]==t[i]){
                k++;
            }
        }

        return k==s.size();

        
    }
};
// @lc code=end

