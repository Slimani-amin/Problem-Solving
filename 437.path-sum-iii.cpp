/*
 * @lc app=leetcode id=437 lang=cpp
 *
 * [437] Path Sum III
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
    void Recherche(TreeNode *root, int targetSum, long PathSum, int &NmbrPath){
        if(root==nullptr){
            return;
        }
        PathSum+=root->val;
        if(PathSum==targetSum){
            NmbrPath++;
            
        
        }
        
        Recherche(root->left,targetSum,PathSum,NmbrPath);
        Recherche(root->right,targetSum,PathSum,NmbrPath);
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        if(root==nullptr){
            return 0;
        }
        queue<TreeNode*> list;
        int NmbrPath = 0;
        list.push(root);
        TreeNode *courant;
        while(!list.empty()){
            courant = list.front();
            if(courant->val==targetSum){
                NmbrPath++;
            }
            
            Recherche(courant->left,targetSum,courant->val,NmbrPath);
            Recherche(courant->right,targetSum,courant->val,NmbrPath);
            
            if(courant->left!=nullptr){
                list.push(courant->left);
            }
            if(courant->right!=nullptr){
                list.push(courant->right);
            }
            list.pop();
        }
        return NmbrPath;
    }
};
// @lc code=end

