/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    struct ListNode *head=(struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *curr=head;

    int val=0;
    int carry=0;

    while(l1!=NULL || l2!=NULL){
        if(l1!=NULL){
            if(l2!=NULL){
                val=l1->val+l2->val+carry;
                l1=l1->next;
                l2=l2->next;
            }
            else{
                val=l1->val+carry;
                l1=l1->next;
            }
        }
        else{
            val=l2->val+carry;
            l2=l2->next;
        }
        struct ListNode *new=(struct ListNode*)malloc(sizeof(struct ListNode));
        new->val=val%10;
        new->next=NULL;
        curr->next=new;
        curr=new;

        carry=val/10;
    }
    if(carry){
        struct ListNode *new=(struct ListNode *)malloc(sizeof(struct ListNode));
        new->val=carry;
        new->next=NULL;
        curr->next=new;
    }

    curr=head->next;
    free(head);
    return curr;
}