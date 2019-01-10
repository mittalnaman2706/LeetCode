class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
        if(a.size()==1)
        {
            if(a[0]<9)
                a[0]++;
            else
            {
                a[0]=0;
                a.insert(a.begin(),1);
            }
            return a;
        }
        int n=a.size(),i,j,k;
        
        for(i=n-1;i>=0;i--)
        {
            if(a[i]<9)
            {
                a[i]++;
                break;
            }
            else if(a[i]==9)
                a[i]=0;
        }
        if(a[0]==0)
            a.insert(a.begin(),1);
        return a;
    }
};