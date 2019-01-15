class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int g=0;
        int j,i,sum=1,x=1;
        for(auto i : nums)
        {    
            if(i)
                x*=i;
            else
                g++;
        }
        vector <int > :: iterator it;
        
        if(g>1)
        {
            for(it=nums.begin();it!=nums.end();it++)
                *it=0;
            return nums;
        }
        if(g==1)
        {
            for(it=nums.begin();it!=nums.end();it++)
            {
                if(*it)
                    *it=0;
                else
                    *it=x;
            }
            return nums;
        }   
        
        for(it=nums.begin();it!=nums.end();it++)
            *it = x/(*it);
        
        return nums;
            
    }
};