class Solution {
public:
    
    vector<vector<int>> threeSum(vector<int>& a) {
        
        vector<vector<int>>v;
        vector<int>c;
        int i,j,k,l,n=a.size();
        if(n<3)return v;
        sort(a.begin(),a.end());
        map<int,int>m;
        for(auto u : a)
            m[u]++;
        
        vector<int>b;
        for(auto o : m)
            b.push_back(o.first);
        
        if(m[0]>2)
        {
            c.clear();
            c.push_back(0);
            c.push_back(0);
            c.push_back(0);
            v.push_back(c);
            
        }
        for(auto o : m)
        {
            if(o.first==0)
                continue;
            if(o.second>1)
            {
                l=o.first*2;
                l=-l;
                if(m[l])
                {
                    c.clear();
                    c.push_back(o.first);
                    c.push_back(o.first);
                    c.push_back(l);
                    v.push_back(c);
                }
            }
        }
        m.clear();
        sort(b.begin(),b.end());
        if(b.size()>2)
        for(auto q=b.begin();q!=b.end()-2;q++)
        {
            for(auto w=q+1;w!=b.end()-1;w++)
            {
                if(binary_search(w+1,b.end(),-(*q+*w)))
                {
                    c.clear();
                    c.push_back(*q);
                    c.push_back(*w);
                    c.push_back(-(*q+*w));
                    // sort(c.begin(),c.end());
                    v.push_back(c);
                }
            }
        }
        b.clear();c.clear();
        
        return v;
    }
};