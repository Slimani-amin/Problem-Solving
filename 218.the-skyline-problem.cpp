/*
 * @lc app=leetcode id=218 lang=cpp
 *
 * [218] The Skyline Problem
 */

// @lc code=start

#include <vector>

using namespace std;
class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {

       vector<vector<int>> skyline;
       vector<int> point;

        point.push_back(buildings[0][0]);
        point.push_back(buildings[0][2]);

        skyline.push_back(point);
        point.clear();

        for (int i = 1; i < buildings.size(); i++)
        {
            if(buildings[i][0]==skyline[skyline.size()-1][0]){
                point.push_back(buildings[i][0]);
                point.push_back(max(buildings[i][2],skyline[skyline.size()-1][1]));
                skyline.pop_back();
                skyline.push_back(point);
                point.clear();
                continue;
            }
            if(buildings[i][2]==skyline[skyline.size()-1][1]){
                
                skyline.pop_back();
               
                continue;
            }

            if(buildings[i][0]<buildings[i-1][1]){
                     if(buildings[i][2]>buildings[i-1][2]){

                        point.push_back(buildings[i][0]);
                        point.push_back(buildings[i][2]);
                        skyline.push_back(point);
                        point.clear();
                     }
                     else if(buildings[i][2]<buildings[i-1][2]){
                        point.push_back(buildings[i-1][1]);
                        point.push_back(buildings[i][2]);
                        skyline.push_back(point);
                        point.clear();
                     }
            }
            else if(buildings[i][0]>buildings[i-1][1]){
                point.push_back(buildings[i-1][1]);
                point.push_back(0);
                skyline.push_back(point);
                point.clear();
                point.push_back(buildings[i][0]);
                point.push_back(buildings[i][2]);
                skyline.push_back(point);
                point.clear();
            }
            else{
                if(buildings[i][2]>buildings[i-1][2]){
                    point.push_back(buildings[i-1][1]);
                    point.push_back(buildings[i][2]);
                    skyline.push_back(point);
                    point.clear();


                }
            }
            

    
            }

            point.push_back(buildings[buildings.size()-1][1]);
            point.push_back(0);
            skyline.push_back(point);
            point.clear();


            return skyline;

            


            

        
            
            
        }
        
        
    
};
// @lc code=end

