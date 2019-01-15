class Solution {
public:
        
    void connect(TreeLinkNode *root) {
        if(!root)
            return;
        while(root->left)
        {
            TreeLinkNode* p = root;
            while(p)
            {
                p->left->next=p->right;
                if(p->next)
                    p->right->next = p->next->left;
                p=p->next;
            }
            root=root->left;
        }        
    }
};