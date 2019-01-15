class Solution {
public:
    int longestConsecutive(vector<int> a) {
        sort(a.begin(),a.end());
        int i,j=1,k,n=a.size(),maxi=-1;
        if(!n)return 0;
        unique(a.begin(),a.end());
        for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1]-1)
                j++;
            else
            {
                maxi=max(j,maxi);
                j=1;
            }
        }
        maxi=max(maxi,j);
        return maxi;
    }
};