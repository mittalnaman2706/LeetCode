class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
     
        ListNode* q=head;
        
        if(!q)
            return NULL;
        ListNode* w=head;
        while(q && w)
        {
            q=q->next;
            w=w->next;
            if(w)
                w=w->next;
            if(q==w)
                break;
        }
        if(!q || !w)
           return NULL;
  
        w=head;
        while(q!=w)
        {
            w=w->next;
            q=q->next;
        }
        return q;
    }
};