/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode* a, *b, *p = head;
    int temp;
    if(!head || !head->next )
    return head;
    else{
        while(p && p->next){
            a = p;
            b = p->next;
            temp = a->val;
            a->val = b->val;
            b->val = temp;
            p = p-> next ->next;
        }
    }
return head;
    }
