class Solution {
public:
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return 1+max(height(root->left),height(root->right));
    }
    
    int maxDepth(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        return 1+max(height(root->left),height(root->right));
    }
};