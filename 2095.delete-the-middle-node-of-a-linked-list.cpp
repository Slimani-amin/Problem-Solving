/*
 * @lc app=leetcode id=2095 lang=cpp
 *
 * [2095] Delete the Middle Node of a Linked List
 */

// @lc code=start
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
 #include <cmath>

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==nullptr){
            return nullptr;
        }
        if(head->next->next==nullptr){
            head->next=nullptr;
            return head;
        }
        int n=0;
        ListNode *courant, *precedent;
        courant = head;
        while(courant!=nullptr){
            n++;
            courant=courant->next;
        }
        int cmpt =1;
        courant = head->next;
        precedent = head;
        while(cmpt<std::floor(n/2)){
            precedent = precedent->next;
            courant = courant->next;
            cmpt++;
        }
        precedent->next = courant->next;
        return head;
        
    }
};
// @lc code=end

