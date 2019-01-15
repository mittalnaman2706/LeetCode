class Solution {
public:
    int findDuplicate(vector<int>& a) {
        
        int i,j;
        sort(a.begin(),a.end());
        for(i=0;i<a.size();i++)
            if(a[i]==a[i+1])
                return a[i];
        return -1;        
    }
};