class Solution {
public:
    bool isHappy(int n) {
        
        int i,j,m,t=10;
        if(!n)
            return 0;
        while(t--)
        {
            m=n;
            n=0;
            while(m)
            {
                j=m%10;
                n+=j*j;
                m/=10;
            }
            
            if(n==1)
                return 1;

        }
        return 0;
    }
};