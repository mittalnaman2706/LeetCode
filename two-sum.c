int* twoSum(int* a, int n, int t) {
    int *res;
    res = (int *)malloc(2*sizeof(int));
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==t)
            {
                  res[0]=i;
                  res[1]=j;
                  break;
            }
        }
    }    
    return res;
}