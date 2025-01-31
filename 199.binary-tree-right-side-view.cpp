/*
 * @lc app=leetcode id=199 lang=cpp
 *
 * [199] Binary Tree Right Side View
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
public:
    void remplieVec(TreeNode *root,int dept, vector<int> &v){
        if(v.size()==dept){
            v.push_back(root->val);
        }
        
            if(root->right!=nullptr){
                remplieVec(root->right,dept+1,v);
            }
            if(root->left!=nullptr){
                remplieVec(root->left,dept+1,v);
            }

        



     }
     
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        if(root!= nullptr){
        remplieVec(root,0,v);
        }
        return v;


        
    }
};
// @lc code=end

