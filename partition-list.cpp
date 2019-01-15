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
    ListNode* partition(ListNode* head, int x) {
        ListNode* walk=head;
        ListNode* newList=NULL;
        int c=0;
        vector<int > v;
        while(walk)
        {
            if(walk->val<x)
                v.push_back(walk->val);
            walk=walk->next;
        }
        walk=head;
        while(walk)
        {
            if(walk->val>=x)
                v.push_back(walk->val);
            walk=walk->next;
        }   
        int i=0;
        walk=head;
        while(walk)
        {
            walk->val=v[i++];
            walk=walk->next;
        }
        return head; 
    }
};