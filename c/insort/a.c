#include<stdio.h>
int main(){
    int a[20],i;
    for(i=19;i>-1;i--){
        a[19-i]=i;
    }
    for(i=0;i<20;i++){
        printf("%d ",a[i]);
    }
        printf("\n");


    for(i=1;i<20;i++)
        insort(a,i,a[i]);

    for(i=0;i<20;i++){
        printf("%d ",a[i]);
    }
        printf("\n");
}

int insort(int a[],int pos,int value){
    int i;
    i=pos-1;
    while(i>=0&&a[i]>value){
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=value;
}
