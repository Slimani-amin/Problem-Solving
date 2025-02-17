/*
 * @lc app=leetcode id=328 lang=cpp
 *
 * [328] Odd Even Linked List
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
        ListNode* oddEvenList(ListNode* head) {
            if(head == nullptr || head->next == nullptr || head->next->next == nullptr){
                return head;
            }
            ListNode *odd, *even, *lastOdd, *connexion;
            odd = head;
            even = head->next;
            connexion = even;
            lastOdd = odd;
            while(odd && even && even->next){
                odd = even->next;
                even->next = odd->next;
                even = odd->next;
                lastOdd->next = odd;
                lastOdd = odd;
           
            }
            lastOdd->next = connexion;
    
            return head;
           
            
        }
    };
    
// @lc code=end

