#define N 20
#include<stdio.h>
int a[N];
int store;
int i;
int main(){
    for(i=0;i<N;i++)
        a[i]=N-i;
    printf("before sort:\n");
    for(i=0;i<N;i++)
       printf("%d ",a[i]);
       printf("\n");
    qsort(a,0,N-1);
    printf("after sort:\n");
    for(i=0;i<N;i++)
       printf("%d ", a[i]);
    printf("\n");
}

int qsort(int a[],int left,int right){
    if(left>=right) return;
    int mid=(left+right)/2;
    printf("left :%d\n",left);
    printf("mid  :%d\n",mid);
    printf("right:%d\n",right);
    printf("\n");
    store=left;
    int tmp;
    tmp=a[mid];
    a[mid]=a[right];
    a[right]=tmp;
    for(i=left;i<right;i++){
        if(a[i]<=a[right]){
            tmp=a[i];
            a[i]=a[store];
          //a[store]=a[i];
            a[store]=tmp;
            store++;
        }
    }
        tmp=a[right];
        a[right]=a[store];
        a[store]=tmp;
        qsort(a,left,store-1);
        qsort(a,store+1,right);
}
