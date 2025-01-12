/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        else if(head->next->next==nullptr){
            ListNode *reserve;
            reserve = head->next;
             head->next->next = head;
             head->next = nullptr;
             return reserve;

        }
        
        ListNode *courant, *presedent, *suivant;

        presedent = head;
        courant = presedent->next;
        suivant = courant->next;
        presedent->next = nullptr;
        while(suivant->next!=nullptr){
          courant->next=presedent;
          presedent = courant;
          courant = suivant;
          suivant = suivant->next;


        }
        courant->next = presedent;
        suivant->next = courant;
        return suivant;
        
    }
};
// @lc code=end

