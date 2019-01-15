class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {

        vector<int>v;
        int k,n=a.size();
        if(!n)
            return v;
        int m=a[0].size();
        int N=n*m;
        int u=0,l=0,r=m-1,d=n-1;
        int i,j,g=0;
        while(1)
        {
            for(i=l;i<=r;i++)
                v.push_back(a[u][i]);
            u++;
            if(u>d)
                break;
            for(i=u;i<=d;i++)
                v.push_back(a[i][r]);
            r--;
            if(l>r)
                break;
            for(i=r;i>=l;i--)
                v.push_back(a[d][i]);
            d--;
            if(u>d)
                break;
            for(i=d;i>=u;i--)
                v.push_back(a[i][l]);
            l++;
            if(l>r)
                break;
        }
        
        return v;
    }
};