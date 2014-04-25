#include<stdio.h>
int i;
i=1;
typedef struct point{                 // define struct
	int data;
	struct point *l;
	struct point *r;
}Lnode;

void build(Lnode *p){
while(i<10){
	i++;
	p->data=i;
	p->l=(struct Lnode *)malloc(12); 
	p->l->l=NULL;
	p->l->r=NULL;
	p->r=(struct Lnode *)malloc(12); 
	p->r->l=NULL;
	p->r->r=NULL;
        build(p->l);
        build(p->r);
        }

return;
}

void output(Lnode *q){
	if(q==NULL)
		return;
while( q!=NULL){
printf("%d\n",q->data);
output(q->l);
output(q->r);
}
return;
}

int main(){
struct Lnode *h;                     // set the head point
h=(struct Lnode *)malloc(12);
printf("%d\n",h);
build(h);
//output(h);

return 0;
}
