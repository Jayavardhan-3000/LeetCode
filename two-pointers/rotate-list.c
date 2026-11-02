/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (!head || !head->next) return head;
    struct ListNode* end = head, *start = head, *temp = head;
    int len = 0, count = k;
    while (temp) {
        len++;
        temp = temp->next;
    }
    k = k % len;
    if (k == 0) return head;
    count = k;
    while (count && end) {
        end = end->next;
        count--;
    }
    while (end && end->next) {
        end = end->next;
        start = start->next;
    }
    struct ListNode* newHead = start->next;
    start->next = NULL;
    end->next = head;
    head = newHead;
    return head;
}