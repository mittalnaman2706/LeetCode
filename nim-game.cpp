class Solution {
public:
    
    bool fun(long long n,long long m)
    {
        if(!m && n<4)
            return 1;
        else if(m && n<4)
            return 0;
        m=(m+1)%2;
        return fun(n-1,m) || fun(n-2,m) || fun(n-3,m);
    }
    
    bool canWinNim(long long n) {
        
        return ((n%4)?1:0);
    }
};