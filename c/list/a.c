#define N 5
#include<stdlib.h>
#include<stdio.h>
int i;
typedef struct a{
    int data;
    struct a *next;
}LNode;

int main(){
    LNode *q,*pre,*a[N];
    for(i=0;i<N;i++){
        a[i]=(LNode *)malloc(sizeof(LNode));
        a[i]->data=i;
    }
    for(i=0;i<N-1;i++){
        a[i]->next=a[i+1];
    }
    a[N-1]->next == NULL;
    /*
    for(i=0;i<N;i++)
        printf("%d ",a[i]->data);
   printf("\n");

    for(i=0;i<N-1;i++)
        printf("%d ",a[i]->next->data);
   printf("\n");
     */
}
int bfs(LNode *h){
    push(LNode *h);

}
