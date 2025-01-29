/*
 * @lc app=leetcode id=735 lang=cpp
 *
 * [735] Asteroid Collision
 */

// @lc code=start
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> output;
        output.push_back(asteroids[0]);
        for(int i=1;i<asteroids.size();i++){
            if(output.size()==0){
                output.push_back(asteroids[i]);
            }
            else{
            if(output.back()>0 && asteroids[i]<0){
                
                if(abs(output.back())<abs(asteroids[i])){
                    output.pop_back();
                    i--;

                }
                else if(abs(output.back())==abs(asteroids[i])){
                    output.pop_back();
                }
            }
            else{
                output.push_back(asteroids[i]);
            }
            }
        }


        return output;

        
    }
};
// @lc code=end

