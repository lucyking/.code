#define N 5
#include <stdio.h>
int i;
int a[5];
int k;
int put(int a[5],int k){
        for(i=0;i<k;i++) 
        printf("%d",a[i]);
    printf("\n");
    return 0;
}

int get(int a[5],int k){
    for(i=0;i<k;i++)
        scanf("%d",&a[i]);
    return 0;
}

