#define N 20
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p;
    p=( int*)malloc(sizeof(int)*20);
    int i;
    p[N-1]=2;
    for(i=0;i<N;i++)
        printf("%0d::%d\n",i,p[i]);


    return 0;
}


