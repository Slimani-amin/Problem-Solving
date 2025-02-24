/*
 * @lc app=leetcode id=543 lang=cpp
 *
 * [543] Diameter of Binary Tree
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
    
    int Calcul(TreeNode *root){
        if(!root){
            return 0;
        }

        return 1+max(Calcul(root->right), Calcul(root->left));
    }


public:
    int diameterOfBinaryTree(TreeNode* root) {

        if(!root->right && !root->left){
            return 0;
        }
        if(!root->right){
            return Calcul(root->left);
        }
        if(!root->left){
            return Calcul(root->right);
        }

        return Calcul(root->right)+Calcul(root->left);

        
        
        
        
    }
};
// @lc code=end

