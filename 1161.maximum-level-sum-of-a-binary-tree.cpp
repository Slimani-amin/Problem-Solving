/*
 * @lc app=leetcode id=1161 lang=cpp
 *
 * [1161] Maximum Level Sum of a Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void Recherche(TreeNode *root, int level, vector<int> &v){
        if(root==nullptr){
            return ;
        }
        if(v.size()<level){
            v.push_back(root->val);
        }
        else{
            v[level-1]+=root->val;
        }
        Recherche(root->left,level+1, v);
        Recherche(root->right,level+1, v);


        
    }
public:
    int maxLevelSum(TreeNode* root) {
        vector<int> v;
        Recherche(root,1,v);
        int  imax = 0;
        for(int i=1;i<v.size();i++){
            if(v[imax]<v[i]){
                 imax = i;
            }
        }

        return imax+1;
         
    }
};
// @lc code=end

