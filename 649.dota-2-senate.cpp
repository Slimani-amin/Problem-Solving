/*
 * @lc app=leetcode id=649 lang=cpp
 *
 * [649] Dota2 Senate
 */

// @lc code=start
class Solution {
    public:
        string predictPartyVictory(string senate) {
            queue<int> qD,qR;
            for(int i=0;i<senate.size();i++){
                if(senate[i]=='R'){
                    qR.push(i);
                }
                else{
                    qD.push(i);
                }
            }
            while(qD.size()!= 0 && qR.size()!=0){
                for(int i=0;i<senate.size() && qR.size()!=0 && qD.size()!= 0;i++){
                    if(senate[i]=='R' && qR.front() == i){
                        qD.pop();
                        qR.pop();
                        qR.push(i);
                    }
                    else if(senate[i]=='D' && qD.front() == i){
                        qD.pop();
                        qR.pop();
                        qD.push(i);
                    }
                }
            }
    
    
           if(qR.size()==0){
            return "Dire";
           }
           else{
            return "Radiant";
           }
            
            
            
        }
    };
// @lc code=end

