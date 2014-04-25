#include <stdlib.h>
#include <stdio.h>
int main(){
    int a,b;
    a=b=1;
    int *q;
    q=(int *)malloc(16);
    q[0]=77;
    q[1]=88;
    q[2]=2;
    printf("%d\n",q[0]);
    printf("%d\n",&q[0]);
    printf("%d\n",q[1]);
    printf("%d\n",&q[1]);
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}

77
24158216
88
24158220
1
1
77
22102024
88
22102028
1
1
77
1683464
88
1683468
1
1
77
33124360
88
33124364
1
1
