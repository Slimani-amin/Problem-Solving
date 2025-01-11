#include <iostream>

#include <vector>

using namespace std;



class Solution {
public:

    void search(int i, int j,int n, int m, bool **tab, vector<vector<char>>grid){
        tab[i][j] = true;
        if(j<m-1){
            if(grid[i][j+1] == '1' && !tab[i][j+1]){
                search(i,j+1,n,m,tab,grid);
            }

        }
        if(i>0){
            if(grid[i-1][j] == '1' && !tab[i-1][j]){
                search(i-1,j,n,m,tab,grid);
            }
        }
        if(i<n-1){
            if(grid[i+1][j] == '1' && !tab[i+1][j]){
                search(i+1,j,n,m,tab,grid);
            }
        }
        if(j>0){
            if(grid[i][j-1] == '1' && !tab[i][j-1]){
                search(i,j-1,n,m,tab,grid);
            }
        }
    }

    int numIslands(vector<vector<char>>&grid) {
        int cmpt = 0;

        bool tab[grid.size()][grid[0].size()];

        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                tab[i][j]=false;
        }
        }
        

        for(int i = 0; i<grid.size();i++){
            for(int j =0; j<grid[i].size();j++){

        
                if(grid[i][j]=='1' && tab[i][j]==false){
                    cmpt++;
                    search(i,j,grid.size(),grid[0].size(),tab,grid);
                }
                

               
            }
        }

        return cmpt;
        
    }
};