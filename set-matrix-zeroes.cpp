class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        
        int i,j,q,w,k,n=a.size();
        if(!n)
            return;
        int m=a[0].size();
        
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                if(a[i][j]==0)
                    a[i][j]=-943867;
        
        //Dummy value is chosen randomly
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]==-943867)
                {
                    a[i][j]=0;
                 
                    //Changing column to zero but retaining value of element which was zero initially now saved as -943867
                    for(q=0;q<n;q++)
                        if(a[q][j]!=-943867)
                            a[q][j]=0;
                    
                    
                    //Changing row to zero but retaining value of element which was zero initially now saved as -943867
                    for(q=0;q<m;q++)
                        if(a[i][q]!=-943867)
                            a[i][q]=0;
                }
            }
        }
        return;
    }
};