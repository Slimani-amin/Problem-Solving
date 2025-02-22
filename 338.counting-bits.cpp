/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 */

// @lc code=start
class Solution {
    public:
        vector<int> countBits(int n) {
            vector<int> output;
            output.push_back(0);
            if(n==0){
                return output;
            }
            output.push_back(1);
            if(n==1){
                return output;
            }
             int s,i;
            while(output.size()<n+1){
                s = output.size();
                for(i=0;i<s && output.size()<n+1;i++){
                    output.push_back(1+output[i]);
                }
    
    
            }
    
    
            return output;
            
        }
    };
// @lc code=end

