/*
 * @lc app=leetcode id=2130 lang=cpp
 *
 * [2130] Maximum Twin Sum of a Linked List
 */

// @lc code=start
/**
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode *courant;
        vector<int> v;
        courant = head;
        while(courant!=nullptr){
            v.push_back(courant->val);
            courant= courant->next;
        }
         int n= v.size();
         int max=0;
        for(int i=0;i<n/2;i++){
            if(max<v[i]+v[n-1-i]){
                max = v[i]+v[n-1-i];
            }
        }

        return max;

        
    }
};
// @lc code=end

