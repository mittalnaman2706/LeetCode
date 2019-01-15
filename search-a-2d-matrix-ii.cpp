class Solution {
public:
    int n,m;
    bool fun(vector<vector<int>>& a,int i,int j,int k){
        
        if(i<0 || i>=n || j<0 || j>=m || a[i][j]==-54932134)
            return 0;
        
        if(k<a[i][j]){
            a[i][j]=-54932134;
            return fun(a,i-1,j,k) || fun(a,i,j-1,k);}
        else if(k>a[i][j]){
            a[i][j]=-54932134;
            return fun(a,i+1,j,k) || fun(a,i,j+1,k);}
        else
            return 1;
    }
    
    bool searchMatrix(vector<vector<int>>& a, int k) {
        n=a.size();
        if(n==0)
            return 0;
        m=a[0].size();
        
        return fun(a,n/2,m/2,k);
    }
};