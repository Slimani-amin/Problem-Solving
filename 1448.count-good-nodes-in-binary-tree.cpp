/*
 * @lc app=leetcode id=1448 lang=cpp
 *
 * [1448] Count Good Nodes in Binary Tree
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
    void count(TreeNode* root, int max, int &cmpt){
         if(root->val>=max){
            cmpt++;
            max = root->val;
         }
   
        if(root->left!=nullptr){
            count(root->left,max,cmpt);
        }
        if(root->right!=nullptr){
            count(root->right,max,cmpt);
        }
        

    }
public:
    int goodNodes(TreeNode* root) {

       

        int cmpt,max;
        max = root->val;
        cmpt = 0;
        count(root,max,cmpt);

        return cmpt;
    }
};
// @lc code=end

