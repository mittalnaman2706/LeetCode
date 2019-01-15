class Solution {
public:
    
int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}    
    
vector<vector<int>> permute(vector<int>& a) {
        
    vector < vector <int >> v;
    int n=a.size();
    vector<int>q;
    sort (a.begin(),a.end());
    int m=factorial(n);
    for(int i=0;i<m;i++)
    {
        v.push_back(q);
        for (int j=0; j<a.size(); j++) 
           v[i].push_back(a[j]); 
  
       next_permutation(a.begin(),a.end()); 
    }
    

  return v;
}

};