#include "cmp.h"
#include <stdio.h>

/*-------fx_partition-------------*/
int partition(int a[],int low,int high){
    int i=low,j=high;
    int tmp;
    int k;
    int b[10];
   static int c=1;  // i>the sequence
   //int sort_flag ;
    //is signed for printf,when i==j,there is no sort but will printf once again
    
    printf("%d>\n",c);
    for(k=0;k<=9;k++) 
        b[k]=k>=low&&k<=high?a[k]:0;
    for(k=0;k<=9;k++) 
        printf("%d.",b[k]);
    printf("\n");

    tmp=a[i];  //  tmp=a[0]; <----my fault
    while(i<j){
    while( i<j && a[j]>=tmp ) --j; 
    a[i]=a[j];
    while( i<j && a[i]<=tmp ) ++i;
    a[j]=a[i];
   // sort_flag =1;
    }
    a[i]=tmp;

    for(k=0;k<10;k++) 
        printf("%d.",a[k]);
    printf("\n");
 //   sort_flag =0;
    c++;
    return i;
}

/*-------fx_Qsort-------------*/
int Qsort(int a[],int low,int high){
    int k;
    if(low<high){
    int axis = partition(a,low,high);   
            //xxxx0,9 is arry's Beginning&End 
    Qsort(a,low,axis-1);
  /*  for(k=low;k<axis;k++) 
        printf("%d.",a[k]);
    printf("\n");
   */
    Qsort(a,axis+1,high);
  /*  for(k=low;k<axis;k++) 
        printf("%d.",a[k]);
    printf("\n");
   */
    }


}


int main(){
    int a[10],k;
    /* -------data I/O---------- */
    printf("may i have your numbers:\n");
    for(k=0;k<10;k++)
        scanf("%d",&a[k]);
    printf("the input NO.is:\n");
    for(k=0;k<10;k++) 
        printf("%d.",a[k]);
    printf("\n");
    
    Qsort(a,0,9);
    printf("after sort the NO.is:\n");
    for(k=0;k<10;k++) 
        printf("%d.",a[k]);
    printf("\n");
}
