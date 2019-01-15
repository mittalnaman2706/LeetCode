class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head->next==NULL)
            return NULL;
        if(head->next->next==NULL && n==2)
            head=head->next;
        else{
        ListNode* w;
        ListNode* ptr;
        w=head;
        ptr=head;
        int i;
        while(n--)
            ptr=ptr->next;
        if(ptr==NULL)
            head=head->next;
        else{
        
        while(ptr->next!=NULL)
        {
            w=w->next;
            ptr=ptr->next;
            
        }
        w->next=w->next->next;}}
        return head;
    }
};