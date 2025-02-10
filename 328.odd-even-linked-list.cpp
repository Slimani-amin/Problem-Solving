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
            if (!head || !head->next) {
                return head;
            }
    
            ListNode* odd = head;            // Pointeur pour la liste impaire
            ListNode* even = head->next;     // Pointeur pour la liste paire
            ListNode* evenHead = even;       // Sauvegarde du premier élément pair pour la connexion finale
    
            while (even && even->next) {
                odd->next = even->next;      // Connecter le prochain élément impair
                odd = odd->next;             // Avancer le pointeur impair
                even->next = odd->next;      // Connecter le prochain élément pair
                even = even->next;           // Avancer le pointeur pair
            }
    
            odd->next = evenHead;  // Connecter la fin de la liste impaire au début de la liste paire
            return head;
        }
    };
    
// @lc code=end

