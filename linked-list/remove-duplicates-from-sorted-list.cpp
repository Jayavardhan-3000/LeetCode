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
    ListNode* deleteDuplicates(ListNode* head) {
          if (!head) return head;

        ListNode* org = head;
        ListNode* dup = head->next;

        while (dup) {
            if (org->val == dup->val) {
                dup = dup->next;
            } else {
                org->next = dup;
                org = org->next;
                dup = dup->next;
            }
        }

        org->next = nullptr;
        return head;
    }
};