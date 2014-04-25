#include <stdio.h>
#include <stdlib.h>
int tag=0;
int loc;
typedef struct a{
    int data;
    struct a *l;
    struct a *r;
}LNode;
LNode *k;


int main(){
    LNode *a,*b,*c,*d,*e,*f,*g,*h;
    h=(LNode *)malloc(sizeof(LNode));
    a=(LNode *)malloc(sizeof(LNode));
    b=(LNode *)malloc(sizeof(LNode));
    c=(LNode *)malloc(sizeof(LNode));
    d=(LNode *)malloc(sizeof(LNode));
    e=(LNode *)malloc(sizeof(LNode));
    f=(LNode *)malloc(sizeof(LNode));
    g=(LNode *)malloc(sizeof(LNode));
    h=(LNode *)malloc(sizeof(LNode));

    a->l=b;
    a->r=c;
    b->l=d;
    d->l=e;
    c->r=f;
    f->r=g;
    g->r=h;
    printf("the dep is:%d\n",dep(a));
    c->data=2;
    h->data=2;
    printf("the c->data is:%d\n",c->data);
    printf("the h->data is:%d\n",h->data);
    printf("the true h_loc is:%d\n",(int)h);
    printf("the true c_loc is:%d\n",(int)c);
 
    printf("the find_loc is  :%d\n",search(a,2));
    //int alpha=search(a,2);
   // printf("the find h_loc is:%d\n",alpha);



}

int dep(LNode *p){    //fx:get the tree's depth
    if(p==NULL) return 0;
    return dep(p->l)+1>dep(p->r)+1?dep(p->l)+1:dep(p->r)+1;
}



int search(LNode *p,int x){
    if(tag==1) return loc;
    if(p==NULL) return 0;
    if(p->data==x){
        loc=(int)p;
        tag=1;
        return loc;
    }
    search(p->l,x);
    search(p->r,x);
    return  loc;
}
