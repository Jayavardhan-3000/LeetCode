/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
   if (!head || left == right) return head;

    struct ListNode temp;
    temp.next = head;
    struct ListNode* p = &temp;
    for (int i = 1; i < left; i++) p = p -> next;

    struct ListNode* curr = p -> next;
    struct ListNode* nxt;
    for (int i = 0; i < right - left; i++) {
        nxt = curr -> next;
        curr -> next = nxt -> next;
        nxt -> next = p -> next;
        p -> next = nxt;
    }

    return temp.next;
}