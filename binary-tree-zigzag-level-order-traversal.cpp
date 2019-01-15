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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     
        vector<vector<int>>q;
        int i,j,k,l;
        TreeNode* z;
        TreeNode* x;
        queue<TreeNode* >a;
        if(root==NULL)
            return q;
        a.push(root);
        
        while(a.size())
        {
            vector<int >w;
            k=a.size();
            while(k--)
            {
                z=a.front();
                if(z->left)
                    a.push(z->left);
                if(z->right)
                    a.push(z->right);
                w.push_back(z->val);
                a.pop();
            }
            q.push_back(w);
        }
        for(i=1;i<q.size();i+=2)
        {
            reverse(q[i].begin(),q[i].end());
        }
        return q;
        
        
        
    }
};