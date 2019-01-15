class Solution {
public:
    void moveZeroes(vector<int>& v) {
     
        int i,j,k,c=0;
        vector<int>::iterator it;
        for(it=v.begin();it!=v.end();it++)
        {
            if(*it==0)
            {
                v.erase(it);
                c++;
                it--;
            }
        }
        while(c--)
            v.push_back(0);
        
   } 
};