class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        int i,n=a.size();
        if(a.size()<2) return false; 
              
        unordered_map<int,int > m;
        if(k==0)
            return 0;
        for(i=0;i<n;i++)
        {
            if( m.find(a[i]) != m.end() && i-m[a[i]]<=k)
                return 1;
            m[a[i]]=i;
        }
        return false;
        
    }
};