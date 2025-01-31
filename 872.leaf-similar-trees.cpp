/*
 * @lc app=leetcode id=872 lang=cpp
 *
 * [872] Leaf-Similar Trees
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
    void RemplieVec(TreeNode *root, vector<int> &v){
        if(root!=nullptr){
            if(root->right==nullptr && root->left==nullptr){
                v.push_back(root->val);

            }
            else{
                RemplieVec(root->left,v);
                RemplieVec(root->right,v);
            }
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> vec1,vec2;
        RemplieVec(root1,vec1);
        RemplieVec(root2,vec2);
        if(vec1.size()!=vec2.size()){
            return false;
        }
         for(int i=0;i<vec1.size();i++){
            if(vec1[i]!=vec2[i]){
                return false;
            }
         }

         return true;


        
    }
};
// @lc code=end

