/*
 * @lc app=leetcode id=1466 lang=cpp
 *
 * [1466] Reorder Routes to Make All Paths Lead to the City Zero
 */

// @lc code=start
class Solution {

    public:
        int count =0;
    
        void DFS(int node, int parent, vector<vector<pair<int,int>>>& graph){
            for(auto& [nigh,sign] : graph[node]){
                if(nigh!=parent){
                    count+=sign;
                    DFS(nigh,node,graph);
    
                }
    
            }
        }
    
        int minReorder(int n, vector<vector<int>>& connections) {
            vector<vector<pair<int,int>>> graph(n);
            for(auto & connection : connections){
                graph[connection[0]].push_back({connection[1],1});
                graph[connection[1]].push_back({connection[0],0});
            }
    
            DFS(0, 0, graph);
            
    
            return count;
            
           
            
        }
    };
// @lc code=end

