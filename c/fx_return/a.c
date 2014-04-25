#include<stdio.h>
int tag = 1;
int main(){
    a();
    printf("%d\n",a());
}
int a(){
    if(tag==1) 
        return 1;
    return 0;
}
