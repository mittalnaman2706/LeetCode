class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        long long i,j,t;
        j=0;
        while(n)
        {
            if(n%2)
                j++;
            n/=2;
        }
        return j;        
    }
};