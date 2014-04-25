#include <stdio.h>
#include <math.h>
int a(int i, int j){
        int k;
        k=i*j;
        if(k<1024)
           k=a(i+5,j+5);
        return k;
    }

int main(){
    int x1,x2,x3;
    x1=a(10,20);
    x2=a(27,27);
    x3=a(30,30);
printf("%d\t%d\t%d\t",x1,x2,x3);

return 0;
}


    
