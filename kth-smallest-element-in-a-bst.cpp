class Solution {
public:
    vector<int>v;
void inorder(TreeNode* walk,int k)
{
    if(walk==NULL)
        return;

    inorder(walk->left,k);
    v.push_back(walk->val);
    // if(v.size()==k)
        // return;
    // if(v.size()<k)
    inorder(walk->right,k);
}

    
    int kthSmallest(TreeNode* root, int k) {
        
        inorder(root,k);
        l1:int p=0;
        int n=v[k-1];
        v.clear();
        return n;
            
    }
};