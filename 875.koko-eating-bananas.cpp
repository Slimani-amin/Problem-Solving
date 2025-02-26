/*
 * @lc app=leetcode id=875 lang=cpp
 *
 * [875] Koko Eating Bananas
 */

// @lc code=start
class Solution {
    public:
        int minEatingSpeed(vector<int>& piles, int h) {
    
            int s =1;
            int max = *max_element(piles.begin(), piles.end());
            int left = 1;
            int right = max;
            while(left<=right){
                int k=0;
                int mid = left+(right-left)/2;
                for(int j=0;j<piles.size();j++){
                    if(mid<piles[j]){
                    k+=piles[j]/mid;
                    if((piles[j]%mid)!=0){
                        k++;
                    }
                    }
                    else{
                       k++;
                    }
                     if(k>h){
                        break;
                    }
                }
                if(k<=h){
                    right = mid-1;
                }
                else{
                    left = mid+1; 
                }
            }
    
            return left;
            
        }
    };
// @lc code=end

