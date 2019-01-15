class Solution {
public:
    int n,m;
    bool func(vector<vector<char>>& a, string s,int i,int j,int k)
    {
        char y;
        int z,x,r=0;
        if(k==s.size())
            return 1;
        //Up
        if(i>0 && a[i-1][j]==s[k]){
            y = a[i-1][j];
            a[i-1][j] = '*';
            r = func(a,s,i-1,j,k+1);
            a[i-1][j] = y;
        }
        //Down
        if(!r && i+1<n)
            if(a[i+1][j]==s[k]){
                y = a[i+1][j];
                a[i+1][j] = '*';
                r = func(a,s,i+1,j,k+1);
                a[i+1][j] = y;
            }
        //Right
        if(!r && j+1<m)
            if(a[i][j+1]==s[k]){
                y = a[i][j+1];
                a[i][j+1]  ='*';
                r = func(a,s,i,j+1,k+1);
                a[i][j+1] = y;
            }
        //Left
        if(!r && j>0)
            if(a[i][j-1]==s[k]){
                y = a[i][j-1];
                a[i][j-1] = '*';
                r = func(a,s,i,j-1,k+1);
                a[i][j-1] = y;
            }
        
        return r;
    }
    
    bool exist(vector<vector<char>>& a, string s) {
        
        int i,j,k,l;
        char u;
        n=a.size(),m=a[0].size();
        if(n*m<s.size())
            return 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]==s[0])
                {
                    u=a[i][j];
                    a[i][j]='*';
                    if(func(a,s,i,j,1))
                        return 1;
                    a[i][j]=u;
                }
            }
        }
        return 0;
        
        
    }
};