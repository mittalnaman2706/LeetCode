class Solution {
public:
    vector<string> summaryRanges(vector<int>& a) {
        
        vector<string > s;
        if(!a.size())
            return s;
        int i,p,q,w,e;
        q=0,w=0;
        int n=a.size();
        map<int ,int >m;
        // vector<int >::iterator i;
        for(i=1;i<n;i++){
            
            if(a[i]==a[i-1]+1)
            {
                w=i;
                p=1;
            }    
            else
            {
                m.insert(pair <int, int> (a[q], a[w]));
                // m[a[q]]=a[w];
                q=i;
                w=q;
                p=0;
            }
        }
        m.insert(pair <int, int> (a[q], a[w]));
        map<int ,int >::iterator itr;
        string t,z,x;       
        for (itr = m.begin(); itr != m.end(); ++itr){
                z=to_string(itr->first);
            
            if(itr->first!=itr->second){
                x=to_string(itr->second);
                t=z+"->"+x;
            }
            else
                t=z;
            s.push_back(t);
            
            
        }
        return s;
    }
};