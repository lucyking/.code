
int heapify(int a[],int i,int max){
    int c;
    int left =2*i+1;
    int right=2*i+2;
    int largest=i;
    if(left<max && a[left]>a[i])
        largest=left;
    if(right<max && a[right]>a[largest])
        largest=right;
    if(largest!=i){
        c=a[largest];
        a[largest]=a[i];
        a[i]=c;
    heapify(a,largest,max);
    }
    return 0;

}

