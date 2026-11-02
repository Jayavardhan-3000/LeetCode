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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
      struct ListNode *start = head, *end = head -> next;
      if(!head || !head -> next) return head;
      while(end){
      ListNode * node = new ListNode(gcd(start->val, end->val), end);
      start->next = node;
      start = end;
      end = end->next;
      }
      return head;
    } 
};