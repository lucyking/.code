#include <stdio.h>
int put(int a[],int N){
    int i;
    for(i=0;i<N;i++) 
        printf("%d.",a[i]);
    printf("\n");
    return 0;
}

int get(int a[],int N){
    int i;
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    return 0;
}

