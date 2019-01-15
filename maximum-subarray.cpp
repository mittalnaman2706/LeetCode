class Solution {
public:
    int maxSubArray(vector<int>& a) {
        
        if(a.size()==0)
            return 0;
        int p=0,min=a[0],i,j=0,max=0,sum=0,k,n=a.size();
        for(i=0;i<n;i++)
        {
            
            if(sum+a[i]<0)
                sum=0;
            else
                sum+=a[i];
            
            if(sum>max)
                max=sum;
            if(a[i]>min)
                min=a[i];
        }
        if(!max)
            return min;
        return max;
        
    }
};