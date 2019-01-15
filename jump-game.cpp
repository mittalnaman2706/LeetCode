class Solution {
public:
    bool canJump(vector<int>& a) {
        
        int n=a.size();
        if(n<2)
            return 1;
        int p,i;
        p=a[0]-1;
        for(i=1;i<n;i++)
        {
            if(p<0) return 0;
            p=max(a[i],p)-1;
        }
        if(p<-1)
            return 0;
        return 1;
    }
};