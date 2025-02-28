/*
 * @lc app=leetcode id=450 lang=cpp
 *
 * [450] Delete Node in a BST
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
    void Inserer(TreeNode *A, TreeNode *B){
        if(A && B){
        if(A->val>B->val){
            if(!B->right){
                B->right = A;
            }
            else{
                Inserer(A,B->right);
            }
        }
        else{
            if(!B->left){
                B->left = A;
            }
            else{
                Inserer(A,B->left);
            }
        }
        }
    }
     
public:
    TreeNode* deleteNode(TreeNode* root, int key) {

        if(!root){
            return root;
        }
        if(root->val == key){
            TreeNode *right = root->right;
            TreeNode *left = root->left;
            root = nullptr;
            if(!right){
                return left;
            }
            else{
                Inserer(left, right);
                return right;
            }
            
        }
        else {
             TreeNode *right = root->right;
            TreeNode *left = root->left;
            if(right && right->val==key){
                if(!right->right){
                    root->right = right->left;
                }
                else if(!right->left){
                    root->right = right->right;
                }
                else{
                    Inserer(right->left, right->right);
                    root->right = right->right;
                }
            }
            else if(left && left->val == key){
                if(!left->right){
                    root->left = left->left;
                }
                else if(!left->left){
                    root->left = left->right;
                }
                else{
                    Inserer(left->left, left->right);
                    root->left = left->right;
                }
            }
            else{
                if(right && root->val<key){
                    deleteNode(right, key);
                }
                else if(left){
                    deleteNode(left, key);
                }
            }

            return root;

        }
       
    }
};
// @lc code=end

