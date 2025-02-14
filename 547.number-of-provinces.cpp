/*
 * @lc app=leetcode id=547 lang=cpp
 *
 * [547] Number of Provinces
 */

// @lc code=start
class Solution {
    void DFS(int node, vector<vector<int>> graph, vector<bool>& visited){
        visited[node] = true;
        for(auto& city : graph[node]){
         if(!visited[city]){
             DFS(city, graph, visited);
         }
        }
    }

public:
 int findCircleNum(vector<vector<int>>& isConnected) {
     int n = isConnected.size();
     vector<vector<int>> city(n);
     int i=0;
     for(auto & connection : isConnected){
         for(int j = i+1;j<n;j++){
             if(connection[j] == 1){
                 city[i].push_back(j);
                 city[j].push_back(i);
             }
         }
         i++;

     }
    int count =0;
     vector<bool> visited(n,false);
     for(i =0;i<n;i++){
         if(!visited[i]){
           count++;
           DFS(i,city,visited);
         }
     }



     return count;
     
 }
};
// @lc code=end

