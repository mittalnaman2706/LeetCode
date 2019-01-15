class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
        
        int i,j;
        if(a.size()==0)return 0;
        sort(a.begin(),a.end());
        for(i=0;i<a.size()-1;i++)
            if(a[i]==a[i+1])return 1;
        return 0;
    }
};