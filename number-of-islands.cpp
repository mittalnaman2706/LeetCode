class Solution {
public:
    
     int n,m;
     int a[1000][1000];
 
    void func(int i,int j)
    {
        int z,x;
      /*for(z=0;z<n;z++)
        {
            for(x=0;x<m;x++)
                cout<<a[z][x]<<" ";
            cout<<endl;
        }
        cout<<endl;
        */
        //
        for(z=i-1;z>=0;z--){
            if(a[z][j]!=1)
                break;
            else if(a[z][j]==1){
                a[z][j]=2;
                func(z,j);
                }
            }
        //Down
        for(z=i+1;z<n;z++){
            if(a[z][j]!=1)
                break;
            else if(a[z][j]==1){
                a[z][j]=2;
             func(z,j);
            }
        }
        //Left
        for(z=j-1;z>=0;z--){
            if(a[i][z]!=1)
                break;
            else if(a[i][z]==1){
                a[i][z]=2;
                func(i,z);
            }
        }
        //Right
        for(z=j+1;z<m;z++){
            if(a[i][z]!=1)
                break;
            else if(a[i][z]==1){
                
                a[i][z]=2;
                func(i,z);
            }
        }
        return;
     }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int i,j,k;
        n=grid.size();
        if(!n)
            return 0;
        m=grid[0].size();
        if(!m || !n)
            return 0;
        
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                a[i][j]=grid[i][j]-48;
        int c=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]==1)
                {
                    // cout<<i<<' '<<j<<endl;
                    a[i][j]=2;
                    func(i,j);
                    // cout<<i<<' '<<j<<endl;
                    c++;
                }
            }
        }/*
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }*/
        return c;
    }
};