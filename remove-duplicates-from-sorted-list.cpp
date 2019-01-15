class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;

        ListNode* eptr=head;
        while(eptr->next->next!=NULL)
        {
             if(eptr->val==eptr->next->val)
             {
                 eptr->next=eptr->next->next;
             }
            else
                eptr=eptr->next;
        }
        if(eptr->next!=NULL && eptr->val==eptr->next->val)
            eptr->next=NULL;
        return head;
        
    }
};