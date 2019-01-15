class Solution {
public:
    int evalRPN(vector<string>& s) {
        int i,j,k,n=s.size();
        stack<int>q;
        for(i=0;i<n;i++)
        {
            if(s[i].size()==1 && !isdigit(s[i][0]))
            {
                j=q.top();
                q.pop();
                k=q.top();
                q.pop();
                
                if(s[i][0]=='/')
                    q.push(k/j);
                else if(s[i][0]=='*')
                    q.push(k*j);
                else if(s[i][0]=='-')
                    q.push(k-j);
                else
                    q.push(k+j);
            }
            else
                q.push(stoi(s[i]));
            
        }
        return q.top();
    }
};