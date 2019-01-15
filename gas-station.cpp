class Solution {
public:
  int q,w;  
    int maxim(int a[], int n) 
    { 
       int max_kadane = kadane(a, n,1); 
       int max_wrap = 0, i; 
       for (i=0; i<n; i++) 
       { 
            max_wrap += a[i]; // Calculate array-sum 
            a[i] = -a[i];  // invert the array (change sign) 
       } 
       max_wrap = max_wrap + kadane(a, n,0);
       return (max_wrap > max_kadane)? w:q; 
    } 

    int kadane(int a[], int n, int m) 
    { 
        int max_so_far = 0, max_ending_here = 0; 
        int i,j=0;
        int starto=0,start=0,end=0;
        for (i = 0; i < n; i++) 
        { 
            max_ending_here = max_ending_here + a[i]; 
            if (max_ending_here < 0){
                start=i+1;
                max_ending_here = 0;
            }
            else
            
            if(max_so_far < max_ending_here) 
            {
                starto=start;
                end = i;
                max_so_far = max_ending_here; 
            }
        } 
        if(m)
            q=starto;
        else
            w=(end+1)%n;
        return max_so_far; 
    } 
    
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int i,j,k,l,n;
        n=gas.size();
        int sum = 0,p=0;
        int a[n];
        for(i=0;i<n;i++){
            a[i]=gas[i]-cost[i];
            if(a[i]>0)
                p=1;
            sum+=a[i];}
        if(n==1 && a[0]>-1)
            return 0;
        if(sum<0 || p==0)
            return -1;
        return maxim(a,n);
        
    }
};

// -2 -2 -2 3 3