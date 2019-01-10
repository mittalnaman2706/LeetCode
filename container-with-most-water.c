int maxArea(int* a, int n) {
    
    int i,j,k;
    int q=0,w=n-1;
    int area=-1;
    while(q<w)
    {
        k=w-q;
        if(a[q]<a[w]){
            k*=a[q];
            q++;}
        else{
            k*=a[w];
            w--;}
        if(k>area)
            area=k;
    }
    return area;
}