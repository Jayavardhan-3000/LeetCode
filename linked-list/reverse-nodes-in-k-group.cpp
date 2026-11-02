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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(!head||k==1)return head;
ListNode* temp=new ListNode(0,head),*pre=temp,*curr,*temp1;
while(1){
    curr=pre;
    for(int i=0;i<k&&curr;i++)curr=curr->next;
    if(!curr)break;
    curr=pre->next;
    for(int i=1;i<k;i++){
        temp1=curr->next;
        curr->next=temp1->next;
        temp1->next=pre->next;
        pre->next=temp1;
    }
    pre=curr;
}
return temp->next;

    }
};