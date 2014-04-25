#include "io.h"
#include "buildheap.h"
#include "heapify.h"
#include <math.h>
#include <stdio.h>
#define N 8
int main(){
    int i;
    int c;
    int a[N];
        printf("U should input the nu\n");
        get(a,N);
        put(a,N);
        buildheap(a,N);
        /*
        c=a[0];
        a[0]=a[N-1];
        a[N-1]=c;
        printf(">%d\n",N-1);
        put(a,N);
         */
        for(i=N-1;i>0;i--){
            c=a[0];
            a[0]=a[i];
            a[i]=c;
            printf(">%d\n",i);
            put(a,N);
            heapify(a,0,i);
        }
        return 0;
}
