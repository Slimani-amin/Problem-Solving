/*
 * @lc app=leetcode id=1372 lang=cpp
 *
 * [1372] Longest ZigZag Path in a Binary Tree
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
    void Recherche(TreeNode *root, int isRight, int &maxPath, int NmbrPath){
        if(root==nullptr){
            return;
        }
        if(isRight==0){
            
            Recherche(root->right,1,maxPath,1);
            Recherche(root->left,-1,maxPath,1);

        }
        else if(isRight==1){
            if(root->right){
            Recherche(root->right,1,maxPath,1);
            }
            if(root->left){
            NmbrPath++;
            Recherche(root->left,-1,maxPath,NmbrPath);
            }
        }
        else if(isRight == -1){
            if(root->right){
             NmbrPath++;
            Recherche(root->right,1,maxPath,NmbrPath);
            }
            if(root->left){
            Recherche(root->left,-1,maxPath,1);
            }


        }


        if(maxPath<NmbrPath){
            maxPath=NmbrPath;
        }

    }
public:
    int longestZigZag(TreeNode* root) {
        int maxPath = 0;
        Recherche(root,0,maxPath,0);

        return maxPath;

        
    }
};
// @lc code=end

