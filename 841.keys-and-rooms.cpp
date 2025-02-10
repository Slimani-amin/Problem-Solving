/*
 * @lc app=leetcode id=841 lang=cpp
 *
 * [841] Keys and Rooms
 */

// @lc code=start
class Solution {
    public:
        bool canVisitAllRooms(vector<vector<int>>& rooms) {
            set<int> A,B;
            for(int i=0;i<rooms[0].size();i++){
                A.insert(rooms[0][i]);
            }
            B.insert(0);
            int a,i;
            while(A.size()!=0){
                a = *A.begin();
                A.erase(a);
                if(!B.count(a)){
                    for(i=0;i<rooms[a].size();i++){
    
                        A.insert(rooms[a][i]);
                    }
                 B.insert(a);
                }
                
    
            }
    
            return B.size()==rooms.size();
            
        }
    };
// @lc code=end

