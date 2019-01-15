class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(!head)
            return head;
        ListNode* walk=head;
        ListNode* q=head;
         walk=walk->next;
         while(walk)
         {
             q->next=walk->next;
             walk->next=head;
             head=walk;
             walk=q->next;
         }
        return head;
    }
};