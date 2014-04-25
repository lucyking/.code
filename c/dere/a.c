#include<stdlib.h>
#include<stdio.h>
int main(){
int i=1;



typedef struct point{                 // define struct
	int data;
	struct point *l;
	struct point *r;
}Lnode,*Linklist;

Lnode *h0,*h1,*h2,*h3,*h4;                     // set the head point

h0=(Lnode *)malloc(sizeof(Lnode));
h1=(Lnode *)malloc(sizeof(Lnode));
h2=(Lnode *)malloc(sizeof(Lnode));
h3=(Lnode *)malloc(sizeof(Lnode));
h4=(Lnode *)malloc(sizeof(Lnode));

h0->data=0;
h1->data=1;
h2->data=2;
h3->data=3;
h4->data=4;
h0->l=h1;
h0->r=h2;
h1->l=h3;
h1->r=h4;
printf("%d\n",h0->r->data);
printf("%d\n",h0->l->l->data);
printf("%d\n",h0->l->r->data);

return 0;
}
