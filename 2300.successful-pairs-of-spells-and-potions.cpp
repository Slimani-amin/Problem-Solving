/*
 * @lc app=leetcode id=2300 lang=cpp
 *
 * [2300] Successful Pairs of Spells and Potions
 */

// @lc code=start
class Solution {
    public:
        vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
            sort(potions.begin(), potions.end());
            int m = potions.size();
            int n = spells.size();
            vector<int> pairs(n,0);
            int left ;
            int right;
            int mid;
            for(int i=0; i<n;i++){
                right = m-1;
                left = 0;
            while(left<right){
                mid = left + (right-left)/2;
                if((long long)spells[i]*potions[mid]< success){
                    left = mid+1;
    
                }
                else{
                    right = mid;
                }
                
            } 
            if((long long)spells[i]*potions[left]>=success){
            pairs[i] = m-left;
            }
            } 
    
            return pairs; 
        }
    };
    
// @lc code=end

