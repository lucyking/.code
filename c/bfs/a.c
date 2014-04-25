#define N 6
#include<stdio.h>
    int color[N][N];//0:un_visit 
                    //1:in_visit
                    //2:all_visit
    int counter;
    int s[N][N];//graph
    int i,j;

void main(){
    for(i=0;i<N;i++){      //build gra
        for(j=0;j<N;j++){
            color[i][j]=-1;
        }
    }


   color[0][1]=0;              //assegement 
   color[0][2]=0;              //assegement 
   color[0][3]=0;              //assegement 
  // color[1][2]=0;
 //  color[2][2]=0;
   color[2][4]=0;
   color[4][5]=0;
  // color[2][3]=0;
  // color[3][0]=0;

   counter=0;

/*------Fx_Start-------*/
   printf("Begin->");
   for(i=0;i<N;i++){
       for(j=0;j<N;j++){
           if(color[i][j]==0)
               dfs_visit(i,j);
       }
   }
   printf("End\n");
}


/*-------Fx: dfs_visit---------*/
int dfs_visit(int x,int y){
    int k;
    color[x][y]=1;
    if(x!=y)
    printf("(%d,%d)->",x,y);
    else
    printf("(%d)->",x);

    for(k=0;k<N;k++){
        if(color[y][k]==0){
            dfs_visit(y,k);
        }
    }


    color[x][y]=2;
    return 0;

}



