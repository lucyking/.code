#define N 20
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a1=1;
    int *p1;
    p1=&a1;
    p1=p1++;
    p1=p1++;
    p1=p1++;
    p1=p1++;
    char *p2;
    char a2='a';
    p2=&a2;
    p2++;
    p2++;
    p2++;
    p2++;
    int a[N];
    int i;
    int intsize=sizeof(int);
        printf("%d\t",intsize);

    for(i=0;i<N;i++){
        a[i]=i+1;
        printf("%d.",a[i]);
    }
        printf("\n\n");

    a[13]=0;

    int su(int *p){
        if ((*p)==0){ 
        printf(">%d.%0x\n",*p,p);
            return 0;
        }
        printf(">%d.%0x\n",*p,p);
        return 1+su(p+1);
    }

    int *pa;
    pa=a;
    int c=su(pa);
    printf("%d\n",c);


    return 0;

}









