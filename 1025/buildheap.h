void buildheap( int a[],int n){
    int mid;
    int i;
    mid=n/2-1;
    printf(" the mid is:#No.%d\n",mid);
    for(i=mid;i>=0;i--)
 // for(i=mid,i>=0,i--)  #error --->;|,    

        heapify(a,i,n);
    put(a,8);
}



