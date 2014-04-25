#include <stdio.h>
int main(){
    int a[5],i,k;
    k=0;
    for(i=0;i<=4;i++){
        a[i]=0;
        printf("%d\n",a[i]);
    }
        printf("\n");

    a[++k]=1;
    for(i=0;i<=4;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}
