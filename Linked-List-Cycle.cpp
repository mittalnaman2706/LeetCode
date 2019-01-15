/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode* q=head;
        if(!q)return 0;
        ListNode* w=head->next;
        
        while(q && w)
        {
            if(q==w)
                return 1;
            q=q->next;
            w=w->next;
            if(w)
                w=w->next;
        }
        return 0;
    
    }
};