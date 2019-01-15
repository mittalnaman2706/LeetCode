class Solution {
public:
    int threeSumClosest(vector<int>& a, int target) {
     
     //   sort(a.begin(),a.end());
        int i,j,k,l,h=0,u=1000000;
        for(vector<int>::iterator i = a.begin(); i != a.end()-2; i++)
        {
            for(vector<int>::iterator j = i+1; j != a.end()-1; j++)
            {
                for(vector<int>::iterator k = j+1; k != a.end();k++)
                {
                    // cout<<*i<<' '<<*j<<' '<<*k<<endl;
                    if(abs(target-*i-*j-*k)<u){
                        u=abs(target-*i-*j-*k);
                        h=(*i+*j+*k);
                    }
                }
            }
        }
        return h;
    }
};