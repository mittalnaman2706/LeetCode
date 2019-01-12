class Solution {
public:
    
    
    int climbStairs(int n) 
    {
        int a[10000];
        a[1]=1;
        a[2]=2;
        a[0]=0;
        for(int i=3;i<10000;i++)
            a[i]=a[i-1]+a[i-2];
        

        return a[n];   
        
    }
};