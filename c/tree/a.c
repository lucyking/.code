#include<stdio.h>
int i=0;
typedef struct point{                 // define struct
	int data;
	struct point *l;
	struct point *r;
}Lnode;

void build(Lnode *p){
	if(i>5) {
		i--;
		return;
	}
	else if(i<5){                         //build
		i++;
		p->data=i;

		p->l=(Lnode *)malloc(sizeof(Lnode)); 
		p->l->l=NULL;
		p->l->r=NULL;

		p->r=(Lnode *)malloc(sizeof(Lnode)); 
		p->r->l=NULL;
		p->r->r=NULL;

		build(p->l);
		build(p->r);

		i--;	
		return;
	}
}


void output(Lnode *q){
	if(q==NULL)
		return;
	else if( q->data!=NULL){
		printf("%d\n",q->data);
		output(q->l);
		output(q->r);
	}
}

int main(){
	Lnode *h;                     // set the head point
	h=(Lnode *)malloc(sizeof(Lnode));
//	printf("%d\n",h);
	h->data=0;
	build(h);
	output(h);
	return 1;
}
