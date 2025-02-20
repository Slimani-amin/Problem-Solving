/*
 * @lc app=leetcode id=1926 lang=cpp
 *
 * [1926] Nearest Exit from Entrance in Maze
 */

// @lc code=start
class Solution {
    public:
        int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
    
            
            queue<pair<int,int>> nodes;
            int dir[4][2] = {{-1,0}, {0,-1}, {1,0}, {0, 1}};
            nodes.push({entrance[0], entrance[1]});
            int i, j, n, m,x,y, sz;
            n = maze.size();
            m = maze[0].size();
            int moves =1;
            
           
           while(!nodes.empty()){
            sz = nodes.size();
            while(sz){
                auto curr = nodes.front();
                nodes.pop();
                for(auto it : dir){
                    x = curr.first + it[0];
                    y = curr.second + it[1];
                    if(x >=0 && x<n && y>=0 && y<m && maze[x][y]=='.'){
                        if(x==0 || y == 0 || x == n-1 || y==m-1){
                            if(x!= entrance[0] || y!=entrance[1] ){
                            return moves;
                            }
                        }
                        else{
                            maze[x][y] = '+';
                            nodes.push({x,y});
                        }
                    }
    
                }
                sz--;
            } 
            moves++;
    
    
            }
    
            return -1;
    
            
    
            
        }
    };
// @lc code=end

