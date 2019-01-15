class Solution {
public:
    
    set<int>values;
    bool findTarget(TreeNode* root, int k) {
        
        if(!root) return 0;
        
        if(values.find(k-root->val)!=values.end()) return 1;
        values.insert(root->val);
    return findTarget(root->right,k) ||findTarget(root->left,k);   
    }
};