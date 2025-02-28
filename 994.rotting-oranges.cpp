/*
 * @lc app=leetcode id=994 lang=cpp
 *
 * [994] Rotting Oranges
 */

// @lc code=start
class Solution {
    public:
        int orangesRotting(vector<vector<int>>& grid) {
            int m = grid.size();
            int n= grid[0].size();
            int a = 0;
            int dict[4][2] = {{-1,0}, {1,0}, {0,-1}, {0,1}};
            vector<pair<int,int>> v;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(grid[i][j]==2){
                        v.push_back({i,j});
                    }
                    else if(grid[i][j]==1){
                        a = 1;
                    }
                    
                }
            }
            if(v.empty()){
                return a==0?0:-1;
            }
            int ans  = -1;
            while(!v.empty()){
                ans++;
                vector<pair<int,int>> v1;
                for(auto cell: v){
                    for(auto d:dict){
                        int x = cell.first + d[0];
                        int y = cell.second + d[1];
                        if(x>=0 && x<m && y>=0 && y<n && grid[x][y]==1){
                            v1.push_back({x,y});
                            grid[x][y] = 2;
                        }
                    }
                }
    
                v = v1;
    
            }
    
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(grid[i][j]==1){
                        return -1;
    
                    }
                }
            }
    
            return ans;
    
        }
    };
// @lc code=end

