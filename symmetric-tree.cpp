/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    bool func(TreeNode* q, TreeNode* w){    
        if(!q && !w)
            return 1;
        if(!q || !w || q->val!=w->val)
            return 0;
        return func(q->left,w->right) && func(q->right,w->left);
    }
    
    bool isSymmetric(TreeNode* root){   
        if(!root)
            return 1;
        return func(root,root);
    }
};