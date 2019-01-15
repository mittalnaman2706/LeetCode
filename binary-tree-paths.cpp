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
    vector<vector<int>>v;
    
    void fun(TreeNode* root,vector<int>q)
    {
        q.push_back(root->val);
        if(!root->left && !root->right)
          v.push_back(q);
        if(root->left)
          fun(root->left,q);
        if(root->right)
          fun(root->right,q);
        return;
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>w;
        vector<int>q;
        if(!root)
            return w;
        fun(root,q);
        string s,d;
        for(auto u : v)
        {
            s="";
            auto r=u.begin();
            for(;r!=u.end()-1;r++)
            {
                s+=to_string(*r);
                s+="->";
            }
            s+=to_string(*r);
            w.push_back(s);
        }
        return w;
    }
};