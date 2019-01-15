class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        
        if(root==NULL)
            return{};
        TreeNode* q=root->left;
        root->left=root->right;
        root->right=q;
        
        invertTree(root->left);
        invertTree(root->right);
        
        return root;
    }
};