class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int i,j,k=0;
        ListNode* q=l1;
        ListNode* w=l2;
        while(l1 && l2)
        {
            j=l1->val+l2->val+k;
            l2->val=j%10;
            l1->val=j%10;
            l1=l1->next;
            l2=l2->next;
            k=j/10;
        }
        while(l1)
        {
            j=l1->val+k;
            l1->val=j%10;
            k=j/10;
            if(l1->next==NULL && k){
                l1->val=j%10;
                l1->next=new ListNode(k);
                return q;
            }
            l1=l1->next;
            if(!l1)return q;
        }
        while(l2)
        {
            j=l2->val+k;
            l2->val=j%10;
            k=j/10;
            if(l2->next==NULL && k){
                l2->val=j%10;
                l2->next=new ListNode(k);
                return w;
            }
            l2=l2->next;
            if(!l2)return w;
        }
        if(k)
        {
            l2=w;
            while(l2->next)
                l2=l2->next;
            l2->next = new ListNode(k);
            return w;
        }
        return q;
    }
};