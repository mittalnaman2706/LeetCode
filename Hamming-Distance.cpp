class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int q,w,i=0;
        while(x && y)
        {
            q=x%2;
            w=y%2;
            if(q!=w)
               i++;
            x/=2,y/=2;
        }
        while(x)
        {
            q=x%2;
            if(q)
              i++;
            x/=2;
        }
        while(y)
        {
            q=y%2;
            if(q)
              i++;
            y/=2;
        }
        return i;
    }
};