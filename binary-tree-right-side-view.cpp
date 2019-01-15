class Solution {
public:
    
    vector<int> rightSideView(TreeNode* root) {
     
        vector<int>v; 
        if(!root)
            return v;
        
        queue<TreeNode * >q;
        q.push(root);
        
        while(q.size())
        {
            int n=q.size();
            n--;
            while(n--)
            {
                if(q.front()->left)
                    q.push(q.front()->left);
                if(q.front()->right)
                    q.push(q.front()->right);
                q.pop();
            }
            v.push_back(q.front()->val);
            if(q.front()->left)
                q.push(q.front()->left);
            if(q.front()->right)
                q.push(q.front()->right);
            q.pop();
        }
        
    return v;
    }
};