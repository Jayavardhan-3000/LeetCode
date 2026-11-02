/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if(!(head->next))
        return NULL;

    struct ListNode* lastnode = head;
    struct ListNode* tobedel = head;
    struct ListNode* prevnode = NULL;
    int count = 0;

    // Traverse the list with a delayed pointer
    while (lastnode) {
        lastnode = lastnode->next;
        count++;

        if (count > n) {
            prevnode = tobedel;
            tobedel = tobedel->next;
        }
    }

    // After traversal, handle the deletion
    if (prevnode == NULL) {
        // Means we have to delete the head
        head = head->next;
    } else {
        prevnode->next = tobedel->next;
    }

    free(tobedel);
    return head;
}