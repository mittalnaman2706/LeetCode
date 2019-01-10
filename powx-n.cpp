class Solution {
public:
    double myPow(double x, int n) {

        if(n==1)
            return x;
        if(n==0)
            return 1;
        if(n==-1)
            return 1/x;
        if(n<0 && n%2)
            return (1/x)*myPow(x*x,n/2); 
        
        else if(n%2)
            return x*myPow(x*x,n/2);
        else
            return myPow(x*x,n/2);
    }
};