class Solution {
public:
    int numSquares(int n) {
        
        int m=sqrt(n);
        if(n*n==m)
            return 1;
        int i,j,k,l;
        for(i=0;i<=m;i++)
        {
            for(j=0;j<=m;j++)
            {
                k=n-i*i-j*j;
                l=sqrt(k);
                if(l*l==k)
                    return !!i+!!j+!!k;
            }
        }
        return 4;
    }
};