int maxProfit(int* a, int n) {
    
    int k=10000000,pr=0,i=0;
    while(i<n)
    {
        if(a[i]<k)
            k=a[i];
        else if(a[i]-k>pr)
            pr=a[i]-k;
        i++;
    }
    return pr;
    
}