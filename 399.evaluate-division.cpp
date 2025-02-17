/*
 * @lc app=leetcode id=399 lang=cpp
 *
 * [399] Evaluate Division
 */

// @lc code=start
class Solution {
      
    void DFS(string node, string& nodeFinal, map<string, vector<pair<string, double>>>& graph, double &output, double resultat, set<string>& nodeVisited){
      nodeVisited.insert(node);
      if(output==-1){
      if(node == nodeFinal){
          output = resultat;
          return;
      }
      for(auto& fil : graph[node]){
          if(!nodeVisited.count(fil.first)){

          DFS(fil.first,nodeFinal, graph, output, resultat*fil.second, nodeVisited);
          }
      }
      }

    }


public:
  vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
      int n = values.size();

      map<string, vector<pair<string, double>>> graph;
      for(int i=0;i<n;i++){
          graph[equations[i][0]].push_back({ equations[i][1], values[i] });
          graph[equations[i][1]].push_back({equations[i][0], 1/values[i]});
      }
      int m = queries.size();
      set<string> nodeVisited;
      vector<double> resultats(m, -1);
      for(int i=0;i<m;i++){
          if(graph.count(queries[i][0])){
          DFS(queries[i][0], queries[i][1], graph, resultats[i], 1, nodeVisited);
          nodeVisited.clear();
          }
      }

      return resultats;

      
  }
};
// @lc code=end

