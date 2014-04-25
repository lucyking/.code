#include "cmp.h"
#include <stdio.h>
int main(){
    int a[5];
    int k;
    /* -------data I/O---------- */
    printf("input 5 NO. to insert-sort!!\n"); 
    for(k=0;k<5;k++)
        scanf("%d",&a[k]);
    printf("the input NO.is:");
    for(k=0;k<5;k++) 
        printf("%d",a[k]);
    printf("\n");
    /*-------insert_sort-------------*/
    int i,j,tmp;
    for(i=1;i<5;i++){
        j=i-1;
        tmp=a[i];
       // a[i]=tmp;
        while(cmp(a[j],tmp)>0 && j>=0){
            a[j+1]=a[j];
            j--;
            for(k=0;k<5;k++) 
                printf("%d",a[k]);
            printf("\n");
        }
       a[j+1]=tmp;
       for(k=0;k<5;k++) 
           printf("%d",a[k]);
       printf("\n");
       
    }
/*------------Output---*/
    printf("after sort the NO.is:");
    for(k=0;k<5;k++) 
        printf("%d",a[k]);
    printf("\n");
return 0;
}
